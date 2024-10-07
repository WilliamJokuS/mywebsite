#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
using namespace std;
string s;
int r,c,stx,sty,enx,eny;
queue<pair<int,int> > q;
int dist[1005][1005];
int grid[1005][1005];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool cek(int x,int y){
	if(x<1||x>r||y<1||y>c||grid[x][y]==-1||dist[x][y]!=-1)return false;
	return true;
}
void fill(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(cek(nx,ny)){
			q.push(mp(nx,ny));
			dist[nx][ny]=dist[x][y];
			fill(nx,ny);
		}
	}
}
void start(){
	memset(dist,-1,sizeof dist);
	dist[stx][sty]=0;
	q.push(mp(stx,sty));
	while(q.size()){
		if(dist[enx][eny]!=-1)break;
		int currx=q.front().fi,curry=q.front().se;
		q.pop();
		fill(currx,curry);
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++)cout<<dist[i][j]<<" ";
			cout<<endl;
		}
		for(int i=1;i<currx;i++){//lompat kiri
			if(grid[i][curry]!=-1&&dist[i][curry]==-1)break;
			q.push(mp(i,curry));
			dist[i][curry]=dist[currx][curry]+1;
		}
		for(int i=currx+1;i<=r;i++){//lompat kanan
			if(grid[i][curry]!=-1&&dist[i][curry]==-1)break;
			q.push(mp(i,curry));
			dist[i][curry]=dist[currx][curry]+1;
		}
		for(int i=1;i<curry;i++){//lompat atas
			if(grid[currx][i]!=-1&&dist[currx][i]==-1)break;
			q.push(mp(i,curry));
			dist[currx][i]=dist[currx][curry]+1;
		}
		for(int i=curry+1;i<=c;i++){//lompat bawah
			if(grid[currx][i]!=-1&&dist[currx][i]==-1)break;
			q.push(mp(i,curry));
			dist[currx][i]=dist[currx][curry]+1;
		}
	}
}
int main(){
	cin>>s;
	cin>>r>>c;
	char ch;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>ch;
			if(ch=='.')grid[i][j]=0;
			else if(ch=='#')grid[i][j]=-1;
			if(ch=='S')stx=i,sty=j;
			if(ch=='T')enx=i,eny=j;
		}
	}
	start();
	cout<<dist[enx][eny]<<endl;
}
