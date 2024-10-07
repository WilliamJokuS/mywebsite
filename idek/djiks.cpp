#include <bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
using namespace std;
int n,e;
int INF=1e9;
int dist[205];
bool vis[205];
vector<pii> adj[205];//weight idx
void djiks(int st,int en){
	for(int i=1;i<=n;i++)dist[i]=INF;
	priority_queue <pii,vector<pii>, greater<pii> > pq;//weight idx
	pq.push({0,st});
	dist[st]=0;
	while(!pq.empty()){
		pii cur=pq.top();
		pq.pop();
		cout<<cur.first<<" "<<cur.second<<endl;
		if(vis[cur.second])continue;
		vis[cur.second]=true;
		if(cur.second==en){
			cout<<dist[en];
			break;
		}
		for(int i=0;i<adj[cur.second].size();i++){
			int to=adj[cur.second][i].second;
			int cost=adj[cur.second][i].first;
			if(dist[to]>cost+cur.first){
				dist[to]=cost+cur.first;
				pq.push({dist[to],to});
			}
		}
	}
}
int main(){
	int v1,v2,weight,st,en;
	cin>>n>>e>>st>>en;
	for(int i=1;i<=e;i++){
		cin>>v1>>v2>>weight;
		adj[v1].pb({weight,v2});
		adj[v2].pb({weight,v1});
	}
	djiks(st,en);
}
