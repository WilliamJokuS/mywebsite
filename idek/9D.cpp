#include <bits/stdc++.h>
#define pb push_back
#define po pop_back
using namespace std;
int n,jl,jt,st,en;
vector <int> adj[505];
int stime[505];
int bfs(int x,int y){
	if(stime[y]!=-1)return stime[y];
	queue <int> q;
	q.push(x);
	stime[x]=0;
	while(!q.empty()){
		int curr=q.front();
		q.pop();
		for(int i=0;i<adj[curr].size();i++){
			if(stime[adj[curr][i]]==-1){
				//nnncout<<adj[curr][i]<<endl;
				q.push(adj[curr][i]);
				stime[adj[curr][i]]=stime[curr]+1;
			}
		}
	}
	return stime[y];
}
int main(){
	int x,y;
	cin>>n>>jl>>jt>>st>>en;
	for(int i=1;i<=jl;i++){
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	int ans=1e9;
	for(int i=1;i<=jt;i++){
		memset(stime,-1,sizeof stime);
		cin>>x>>y;
		adj[x].pb(y);
		adj[y].pb(x);
		if(bfs(st,en)!=-1)ans=min(ans,bfs(st,en));
		adj[x].po();
		adj[y].po();
	}
	cout<<ans<<endl;
}
