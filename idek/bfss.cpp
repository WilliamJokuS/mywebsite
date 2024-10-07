#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
using namespace std;
int grid[105][105];
int dist[105][105];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int a,b,xawal,yawal,xend,yend;
bool cek(int x,int y){
	if(x<1||x>a||y<1||y>b||grid[x][y]==-1||dist[x][y]!=-1)return false;
	return true;
}
void bfs(){
	dist[xawal][yawal]=0;
	queue<pair<int,int>> q;
	q.push(mp(xawal,yawal));
	while(!q.empty()){
		pair<int,int> curr=q.front();
		q.pop();
		if(curr.fi==xend&&curr.se==yend){
			break;
		}
		for(int i=0;i<4;i++){
			int x2=curr.fi+dx[i],y2=curr.se+dy[i];
			if(cek(x2,y2)){
				q.push(mp(x2,y2));
				dist[x2][y2]=dist[curr.fi][curr.se]+1;
			}
			
		}
	}
}
int main(){
	memset(dist,-1,sizeof dist);
	cin>>a>>b;
	char c;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			cin>>c;
			if(c=='.')grid[i][j]=0;
			else grid[i][j]=-1;	
		}
	}
	cin>>xawal>>yawal;
	cin>>xend>>yend;
	bfs();
	cout<<dist[xend][yend];
}
