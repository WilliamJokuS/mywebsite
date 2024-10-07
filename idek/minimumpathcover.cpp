#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int par[105];
bool visit[105];
vector<int> adj[105];
int ans=0;

void dfs(int x){
	visit[x]=true;
	if(adj[x].size()==0)ans++;
	int sz=adj[x].size();
	for(int i=0;i<sz;i++){
		if(!visit[adj[x][i]])dfs(adj[x][i]);
		else ans++;
	}
}
int main(){
	int nVertices, nEdges,v1,v2;
	cin>>nVertices>>nEdges;
	for(int i=1;i<=nVertices;i++){
		visit[i]=false;
		par[i]=i;
	}
	for(int i=1;i<=nEdges;i++){
		cin>>v1>>v2;
		adj[v1].pb(v2);
		par[v2]=v1;
	}
	for(int i=1;i<=nVertices;i++){
		if(!visit[i])dfs(par[i]);
	}
	cout<<ans<<endl;
}

