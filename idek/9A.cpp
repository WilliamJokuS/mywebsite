#include <bits/stdc++.h>
using namespace std;
#define mp make_pair

int maze[205][205];
int memo[205][205];
int n,m,x,y,tmp,ans;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

bool cek(int x,int y){
	if(x<0||x>=n||y<0||y>=m||maze[x][y]==-1||memo[x][y]!=-1)return false;
	return true;
}
void bfs(int x,int y){
	queue<pair<int,int> > q;
	q.push(mp(x,y));
	memo[x][y]=1;
	while(!q.empty()){
		int a=q.front().first,b=q.front().second;
		q.pop();
		if(a==0||b==0||a==n-1||b==m-1){
			ans=memo[a][b];
			return;
		}
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if(cek(x2,y2)){
				q.push(mp(x2,y2));
				memo[x2][y2]=memo[a][b]+1;
			}
		}
	}
	ans=-1;
	return;
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>maze[i][j];
		}
	}
	cin>>x>>y;
	x--;y--;
	bfs(x,y);
	cout<<ans<<endl;
}
