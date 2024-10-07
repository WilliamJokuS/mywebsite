#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int t;
vector<int> adj[1000005];
   	   bool vis[1000005];
void dfs(int idx,int depth,int root,int par){
	vis[idx]=true;
	if(depth==0)return;
	for(int i=0;i<adj[idx].size();i++){
		int tmp=adj[idx][i];
		if(tmp==root||tmp==par)continue;
		dfs(tmp,depth-1,root,idx);
	}
}
int nkota,edge,sol,x,y;
int main(){
	cin>>t;
	while(t--){
		bool ans=true;
		cin>>nkota>>edge>>sol;
		for(int i=1;i<=edge;i++){
			cin>>x>>y;
			adj[x].pb(y);
			adj[y].pb(x);
		}
		for(int i=1;i<=sol;i++){
			cin>>x>>y;
			if(vis[x]){
				ans=false;
				continue;
			}
			dfs(x,y,x,0);
		}
		memset(vis,false,sizeof vis);
		for(int i=1;i<=nkota;i++)adj[i].clear();
		if(ans)cout<<"Yes\n";
		else cout<<"No\n";

	}
	
}
/*
2
3 2 2
1 2
2 3
1 2
2 0

1-->2
2-->3
*/
