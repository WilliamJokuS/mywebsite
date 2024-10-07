#include <bits/stdc++.h>
#define ii pair<int,int>
#define fi first
#define se second
#define pb push_back
using namespace std;
int v,e;
int INF=0x3f3f3f3f;
int dis[2505];
vector<int> edge[2505],w[2505];
bool vis[2505];
int dijk(int from,int to){
	for(int i=1;i<=v;i++){
		dis[i]=INF;
	}
	priority_queue<ii,vector<ii>, greater<ii> > pq;//weight ,from
	ii x;
	x.fi=0;
	x.se=from;
	dis[from]=0;
	pq.push(x);
	while(!pq.empty()&&vis[to]==false){
		ii top=pq.top();
		pq.pop();
		if(vis[top.se])continue;
		vis[top.se]=true;
		if(top.se==to)break;
		for(int i=0;i<edge[top.se].size();i++){
			ii now;
			now.se=edge[top.se][i];
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
	int a,b,tmp1,tmp2,tmp3;
	cin>>v>>e>>a>>b;
	for(int i=1;i<=e;i++){
		cin>>tmp1>>tmp2>>tmp3;
		edge[tmp1].pb(tmp2);
		edge[tmp2].pb(tmp1);
	    w[tmp1].pb(tmp3);
		w[tmp2].pb(tmp3);
	}
	cout<<dijk(a,b)<<endl;
	
}
