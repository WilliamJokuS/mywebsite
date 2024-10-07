#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pll pair<ll ,pair<ll,ll> >
using namespace std;
int stx,sty,edx,edy,r,c;
int    w[1005][1005];
bool  udh[4][1005][1005];
int  grid [1005][1005];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool cek(int x,int y){
	if(x<1||x>r||y<1||y>c||grid[x][y]==-1||w[x][y]!=-1)return false;
	return true;
}
void bfs(){
	memset(w,-1,sizeof w);
	w[stx][sty]=0;
	priority_queue<pll,vector <pll>, greater<pll> > q;
	q.push(mp(0,mp(stx,sty)));
	while(!q.empty()){
		int currx=q.top().se.fi,curry=q.top().se.se;
		q.pop();
		if(currx==edx&&curry==edy)break;
		for(int i=0;i<4;i++){
			int nx=currx+dx[i],ny=curry+dy[i];
			if(cek(nx,ny)){
				q.push(mp(grid[nx][ny],mp(nx,ny)));
				int tmp=max(w[currx][curry],grid[nx][ny]);
				w[nx][ny]=tmp;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>grid[i][j];
		}
	}
	cin>>stx>>sty>>edx>>edy;
	if(grid[edx][edy]==-1){
		cout<<-1<<endl;
		return 0;
	}
	bfs();
	cout<<w[edx][edy]<<endl;
	
}
