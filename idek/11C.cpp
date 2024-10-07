#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dist[205][205];
ll INF=1e9;
ll start,n,m,q,x,y,w;
int main(){
	cin>>n>>m>>q;
	for(int i=1;i<=200;i++){
		for(int j=1;j<=200;j++)dist[i][j]=INF;
	}
	for(int i=1;i<=m;i++){
		cin>>x>>y>>w;
		dist[x][y]=min(dist[x][y],w);
		dist[y][x]=min(dist[y][x],w);
	}
	for(int i=1;i<=200;i++){
		dist[i][i]=0;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
			}
		}
	}
	cin>>x;
	ll ans=0;
	for(int i=1;i<q;i++){
		cin>>y;
		ans+=dist[x][y];
		x=y;
	}
	cout<<ans<<endl;
	return 0;
}
