#include <bits/stdc++.h>
using namespace std;
int a,b,c,t;
int grid[55][55][55];
int dist[55][55][55];
int dx[]={1,-1, 0,0  ,0,0};
int dy[]={0,0,  1,-1 ,0,0};
int dz[]={0,0,  0,0 ,1,-1};
struct point{
	int x,y,z;
};
bool cek(int x,int y,int z){
	if(x<1||x>a||y<1||y>b||z<1||z>c||grid[x][y][z]==1||dist[x][y][z]!=-1)return false;
	return true;
}
void bfs(){
	dist[a][b][c]=0;
	point start;
	start.x=a;start.y=b;start.z=c;
	queue<point> q;
	q.push(start);
	while(!q.empty()){
		point curr=q.front();
		q.pop();
		if(curr.x==1&&curr.y==1&&curr.z==1){
			break;
		}
		for(int i=0;i<6;i++){
			int x2=curr.x+dx[i],y2=curr.y+dy[i],z2= curr.z+dz[i];
			if(cek(x2,y2,z2)){
				point next;
				next.x=x2;next.y=y2;next.z=z2;
				q.push(next);
				dist[x2][y2][z2]=dist[curr.x][curr.y][curr.z]+1;
			}
			
		}
	}
	
}
int main(){
	memset(dist,-1,sizeof dist);
	cin>>a>>b>>c>>t;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			for(int k=1;k<=c;k++){
				cin>>grid[i][j][k];
			}
		}
	}
	bfs();
	if(dist[1][1][1]<=t)cout<<dist[1][1][1]<<endl;
	else cout<<-1<<endl;
}

