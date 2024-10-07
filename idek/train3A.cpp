#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
int m,n,sx,sy,ex,ey,ans=0;
int maze[105][105];
int memo[105][105];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char c;
bool cek(int x,int y){
	if(x<1||y<1||x>m||y>n||maze[x][y]==1||memo[x][y]!=-1)return false;
	return true;
}
void bfs(int x,int y){
	queue <pair<int,int> >q;
	q.push(mp(x,y));
	memo[x][y]=0;
	while(!q.empty()){
		int a=q.front().fi,b=q.front().se;
		q.pop();
		if(a==ex&&b==ey){
			ans=memo[a][b];
			return;
		}
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if (cek(x2,y2)){
				q.push(mp(x2,y2));
				memo[x2][y2]=memo[a][b]+1;
			}
		}
	}
	ans=-1;
	return;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		memset(maze,0,sizeof maze);
		memset(memo,-1,sizeof memo);
		cin>>m>>n;
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>c;
				if(c=='*')maze[i][j]=1;
				else if(c=='$'){
					sx=i;
					sy=j;;
				}
				else if(c=='#'){
					ex=i;
					ey=j;	
				}
			}
		}
		bfs(sx,sy);
		cout<<ans<<endl;
	}
}
