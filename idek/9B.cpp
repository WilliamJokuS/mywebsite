#include <bits/stdc++.h>
#define fi first
#define se second
#define ll long long
#define pb push_back
using namespace std;
pair<int,int> edge[200005];
bool special[50005],vis[50005],del [200005];
vector <int> adj[50005];
ll tmp,t,v,e,sV,q,y;
void dfs(int x){
	vis[x]=true;
//	cout<<x<<endl;
	if(special[x])tmp++;
	for(int i=0;i<adj[x].size();i++){
		if(!vis[adj[x][i]]){
			dfs(adj[x][i]);
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		memset(special,false,sizeof special);
		memset(vis,false,sizeof vis);
		memset(del,false,sizeof del);
		for(int i=1;i<=50000;i++)adj[i].clear();
		ll ans=0;
		cin>>v>>e>>sV>>q;
		for(int i=1;i<=e;i++){
			cin>>edge[i].fi>>edge[i].se;
		}
		for(int i=1;i<=sV;i++){
			cin>>y;
			special[y]=true;
		}
		for(int i=1;i<=q;i++){
			cin>>y;
			del[y]=true;
		}
		for(int i=1;i<=e;i++){
			if(del[i])continue;
			adj[edge[i].fi].pb(edge[i].se);
			adj[edge[i].se].pb(edge[i].fi);
		}
		for(int i=1;i<=v;i++){
			tmp=0;
			if(!vis[i])dfs(i);
			tmp=tmp*(tmp-1)/2;
			ans+=tmp;
		}
		cout<<sV*(sV-1)/2-ans<<endl;
	}
}
