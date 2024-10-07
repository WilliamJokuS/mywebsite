#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
int m,n,tmp1,tmp2,ans=0,far,k,s=0,cnt=0;
char c;
bool visit[505][505];
bool tetep[505][505];
int maze [505][505];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool cek(int x,int y){
	if(x<1||y<1||x>n||y>m||maze[x][y]>0||visit[x][y]==true)return false;
	return true;
}
void bfs(int x,int y){
	queue <pair<int,int> >q;
	q.push(mp(x,y));
	visit[x][y]=true;
	while(!q.empty()){
		if(cnt==s-k)return;
		int a=q.front().fi,b=q.front().se;
		cnt++;
		tetep[a][b]=true;
		q.pop();
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if (cek(x2,y2)){
				q.push(mp(x2,y2));
				visit[x2][y2]=true;
			}
		}
	}
	return;
}
int main(){
	memset(visit,false,sizeof visit);
	memset(maze,0,sizeof maze);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>c;
			if(c=='#')maze[i][j]=1;
			else tmp1=i,tmp2=j,s++;
		}
	}
	bfs(tmp1,tmp2);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(maze[i][j]==1)cout<<'#';
			else if(tetep[i][j])cout<<'.';
			else cout<<'X';
		}
		cout<<endl;
	}
}
