#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define pii pair<int,int>
#define pb push_back
using namespace std;
int n,m,tmp1,tmp2,tmp3,s,e;
const int INF=0x3f3f3f3f;
vector <int> a[300005];
vector <int> w[300005];
bool vis      [300005];
int dis		  [300005];
int dkijakarta(int from,int to){
	for(int i=1;i<=n;i++){
		dis[i]=INF;
	}
	priority_queue<pii,vector<pii>, greater<pii> > pq;//weight,from
	pii x;
	dis[from]=0;
	x.fi=0;
	x.se=from;
	pq.push(x);
	while(!pq.empty()&&!vis[to]){
		pii top=pq.top();
		pq.pop();
		if(vis[top.se]==true){
			continue;
		}
		vis[top.se]=true;
		if(top.se==to){
			break;
		}
		for(int i=0;i<a[top.se].size();i++){
			pii now;
			now.se=a[top.se][i];
			if(dis[now.se]>dis[top.se]+w[top.se][i]){
				dis[now.se]=dis[top.se]+w[top.se][i];
				now.fi=dis[now.se];
				pq.push(now);
			}
		}
	}
	return dis[to];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		memset(vis,false,sizeof vis);
		for(int i=1;i<=n;i++){  
        	a[i].clear();  
        	w[i].clear();  
    	} 
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>tmp1>>tmp2>>tmp3;
			a[tmp1].pb(tmp2);
			w[tmp1].pb(tmp3);
		}
		cin>>s>>e;
		if(dkijakarta(s,e)==INF)cout<<"NO\n";
		else cout<<dis[e]<<endl;
	}
}
