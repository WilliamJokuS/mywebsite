#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int> adj[200005];
bool vis[200005];
int memo[200005];

int dfs(int x){
	vis[x]=true;
	if(memo[x]!=0)return memo[x];
	int ret=0;
	for(int i=0;i<adj[x].size();i++){
		if(vis[adj[x][i]])continue;
		else ret+=dfs(adj[x][i]);
	}
	if(ret==0)return 1;
	else return memo[x]=ret;
}

int main(){
	int q,t,n,u,v;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			adj[i].clear();
			vis[i]=false;
			memo[i]=0;
		}
		for(int i=1;i<n;i++){
			cin>>u>>v;
			adj[v].pb(u);
			adj[u].pb(v);
		}
		int tmp=dfs(1);
		cin>>q;
		for(int i=1;i<=q;i++){
			cin>>u>>v;
			cout<<(long long)dfs(u)*(long long)dfs(v)<<endl;
		}
	}
   
}


