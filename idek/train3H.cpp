#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
int m,n,sx,sy,fx,fy,ans=-1;
int maze[1005][1005];
int memo[1005][1005];
int waktu[1005][1005];
vector <int> test;
queue <pair<int,int> >fire;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
char c;
bool cek(int x,int y){
	if(x<1||y<1||x>m||y>n||maze[x][y]>0||memo[x][y]!=-1)return false;
	return true;
}
bool cek2(int x,int y){
	if(x<1||y<1||x>m||y>n||maze[x][y]!=0||waktu[x][y]!=-1)return false;
	return true;
}
void spread(){
	while(!fire.empty()){
		int a=fire.front().fi,b=fire.front().se;
		fire.pop();
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if(cek2(x2,y2)){
				waktu[x2][y2]=waktu[a][b]+1;
				fire.push(mp(x2,y2));
			}
		}
	}
	return;
}
void bfs(int x,int y){
	queue <pair<int,int> >q;
	q.push(mp(x,y));
	memo[x][y]=0;
	while(!q.empty()){
		int a=q.front().fi,b=q.front().se;
		q.pop();
		if(a==1||b==1||a==m||b==n){
			ans=memo[a][b]+1;
			cout<<ans<<endl;
			return;
		}
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if (cek(x2,y2)){
				if(memo[a][b]+1>=waktu[x2][y2]&&waktu[x2][y2]!=-1)continue;
				q.push(mp(x2,y2));
				memo[x2][y2]=memo[a][b]+1;
			}
		}
	}
	cout<<"IMPOSSIBLE\n";
	return;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(waktu,-1,sizeof waktu);
		memset(maze,0,sizeof maze);
		memset(memo,-1,sizeof memo);
		scanf("%d %d",&m,&n);
		for(int i=1;i<=m;i++){
			string tmp;
			cin>>tmp;
			for(int j=1;j<=tmp.size();j++){
				if(tmp[j-1]=='#')maze[i][j]=1;
				else if(tmp[j-1]=='J'){
					sx=i;
					sy=j;
				}
				else if(tmp[j-1]=='F'){
					fire.push(mp(i,j));
					waktu[i][j]=0;
					maze[i][j]=2;
				}
			}
		}
		spread();
		bfs(sx,sy);
		while(!fire.empty()){
			fire.pop();
		}
	}
	return 0;
}
