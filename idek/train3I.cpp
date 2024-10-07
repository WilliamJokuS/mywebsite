#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define fi first
#define se second
using namespace std;
int   maze[205][205];
int jiggly[205][205];
int memo  [205][205];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int r,c,k,m,n,tmp1,tmp2,L;
vector<int> test;
bool cek(int x,int y){
	if(x<1||y<1||x>r||y>c||jiggly[x][y]!=-1)return false;
	return true;
}
bool cek2(int x,int y){
	if(x<1||y<1||x>r||y>c||memo[x][y]!=-1||maze[x][y]>0)return false;
	return true;
}
void setjiggle(int x,int y,int radi){
	queue <pair<int,int> >q;
	q.push(mp(x,y));
	jiggly[x][y]=0;
	while(!q.empty()){
		int a=q.front().fi,b=q.front().se;
		q.pop();
		if(jiggly[a][b]>radi)continue;
		maze[a][b]=1;
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if(cek(x2,y2)){
				jiggly[x2][y2]=1+jiggly[a][b];
				q.push(mp(x2,y2));
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
		if(a==r&&b==c){
			cout<<memo[a][b]<<endl;
			test.pb(memo[a][b]);
			return;
		}
		for(int i=0;i<4;i++){
			int x2=a+dx[i],y2=b+dy[i];
			if(cek2(x2,y2)){
				memo[x2][y2]=1+memo[a][b];
				q.push(mp(x2,y2));
			}
		}
	}
	test.pb(-1);
	cout<<"Impossible.\n";
	return;
}

int main(){
	while(true){
		memset(maze,0,sizeof maze);
		memset(memo,-1,sizeof memo);
		cin>>r>>c;
		if(r==0&&c==0)break;
		cin>>m;
		for(int i=1;i<=m;i++){
			cin>>tmp1>>tmp2;
			maze[tmp1][tmp2]=1;
		}
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>tmp1>>tmp2>>L;
			for(int j = max(tmp1-L,0);j<=min(tmp1+L,r);j++){
                for(int k = max(tmp2-L,0); k<=min(tmp2+L,c);k++){
                   	int d1=abs(j-tmp1);
					int d2=abs(k-tmp2);
                   	if(d1*d1+d2*d2<=L*L)maze[j][k]=1;
                }
            }
		}
		bfs(1,1);
	}
}
