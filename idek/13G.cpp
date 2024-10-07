#include <bits/stdc++.h>
#define second sd
using namespace std;

int m,n;
bool udah[10][30][30];
bool ck(int x,int y){
	if(x<1||x>m||y<1||y>m||udah[x][y]||grid[x][y]==0)return false;
	return true;
}
void bfs(int grid[30][30],int x,int y){
	queue<pair<int,int>> q;
	q.push({x,y});
	while(!q.empty()){
		int x1=q.top().first,y1=q.top().sd();
		q.pop();
		for(int i=0;i<4;i++){
			int x2=x1+dx[i],y2=y1+dy[i];
			if(ck(x2,y2)){
				
			}
		}
	}
}

int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			bfs(grid,i,j);		
		}
	}
}

