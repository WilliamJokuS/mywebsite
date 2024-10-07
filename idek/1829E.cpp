#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
using namespace std;

int r,c;
int grid[1005][1005];
bool visited[1005][1005];

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
bool cek(int x,int y){
	if(x<1||x>r||y<1||y>c||grid[x][y]==0||visited[x][y])return false;
	return true;
}
int bfs(int x,int y){
	if(visited[x][y]||grid[x][y]==0)return 0;
	visited[x][y]=true;
	int nilai=0;
	queue <pair<int,int>> q;
	q.push(mp(x,y));
	while(!q.empty()){
		pair<int,int> curr=q.front();
		q.pop();
		nilai+=grid[curr.fi][curr.se];
		for(int i=0;i<4;i++){
			int x2=curr.fi+dx[i],y2=curr.se+dy[i];
			if(cek(x2,y2)){
				q.push(mp(x2,y2));
				visited[x2][y2]=true;
			}
			
		}
	}
	return nilai;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		cin>>r>>c;
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cin>>grid[i][j];
				visited[i][j]=false;
			}
		}
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				ans=max(bfs(i,j),ans);
				
			}
		}
		cout<<ans<<endl;
	}
   
}


