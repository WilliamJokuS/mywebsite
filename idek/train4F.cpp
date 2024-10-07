#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
int m,n,sx,sy,xa,ya,xb,yb,xc,yc;
int maze[25][25];
int memo[25][25];
vector <pair<int,int> >tunnel[105];
int dx[]={0, 0,1,-1, 1,-1,1,-1};
int dy[]={1,-1,0, 0,-1, 1,1,-1};
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
		for(int i=0;i<8;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if (cek(x2,y2)){
				q.push(mp(x2,y2));
				memo[x2][y2]=memo[a][b]+1;
			}
		}
		if(maze[a][b]>=4&&maze[a][b]<=25){
			for(int i=0;i<tunnel[maze[a][b]].size();i++){
				int x2=tunnel[maze[a][b]][i].fi,y2=tunnel[maze[a][b]][i].se;
				if(x2==a&&y2==b)continue;
				if(!cek(x2,y2))continue;
				q.push(mp(x2,y2));
				memo[x2][y2]=memo[a][b]+1;
			}
		}
	}
	return;
}
int main(){
	int t,nt=1;
	scanf("%d",&t);
	while(t--){
		memset(maze,0,sizeof maze);
		memset(memo,-1,sizeof memo);
		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++){
			for(int j=1;j<=n;j++){
				cin>>c;
				if(c=='D')maze[i][j]=1;
				else if(c=='#'){
					sx=i;
					sy=j;
				}
				else if(c=='.')maze[i][j]=0;
				else if(c=='A')xa=i,ya=j;
				else if(c=='B')xb=i,yb=j;
				else if(c=='C')xc=i,yc=j;
				else{
					maze[i][j]=c-'A';
					tunnel[c-'A'].pb(mp(i,j));
				}
			}	
		}
		bfs(sx,sy);
		if(memo[xa][ya]==-1||memo[xb][yb]==-1||memo[xc][yc]==-1)cout<<"Case "<<nt<<": impossible\n";
		else cout<<"Case "<<nt<<": "<<max(max(memo[xa][ya],memo[xb][yb]),memo[xc][yc])<<endl;
		for(int i=4;i<=25;i++){
			tunnel[i].clear();
		}
		nt++;
	}
	return 0;
}
