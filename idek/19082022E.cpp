#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m;
typedef long long ll;
vector<int> adj[25];
vector<int> curnode;
int color[25];
bool vis[25];
ll cnt,ans=1;
void dfs(int idx){
	curnode.pb(idx);
	vis[idx]=true;
	for(int i=0;i<adj[idx].size();i++){
		if(!vis[adj[idx][i]]){
			dfs(adj[idx][i]);
		}
	}
}
void coloring(int idx,int col,int sz){
	color[curnode[idx]]=col;
	for(int i=0;i<adj[curnode[idx]].size();i++){
		if(color[adj[curnode[idx]][i]]==col){
			return;
		}
	}
	if(sz==curnode.size()){
		cnt++;
		return;
	}
	coloring(idx+1,1,sz+1);
	color[curnode[idx+1]]=0;
	coloring(idx+1,2,sz+1);
	color[curnode[idx+1]]=0;
	coloring(idx+1,3,sz+1);
	color[curnode[idx+1]]=0;
}
int main(){
	int v1,v2;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>v1>>v2;
		adj[v1].pb(v2);
		adj[v2].pb(v1);
	}
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		curnode.clear();
		dfs(i);
		//cout<<curnode.size()<<endl;
		cnt=0;
		for(int j=1;j<=3;j++){
			coloring(0,j,1);
			color[i]=0;
		}
		//cout<<cnt<<endl;
		ans*=cnt;
	}
	cout<<ans<<endl;
}
