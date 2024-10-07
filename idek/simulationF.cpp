#include <bits/stdc++.h>
using namespace std;
using ll= long long;
vector<vector<bool>> visited;
int grid[1005][1005];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,minpow,area,maxarea;
bool cek(int x,int y,int pow){
	if(x<0||x>=n||y<0||y>=m||grid[x][y]!=pow||visited[x][y])return false;
	return true;
}
void dfs(int x,int y){
	visited[x][y]=true;
	area++;
	for(int i=0;i<4;i++){
		if(!cek(x+dx[i],y+dy[i],grid[x][y]))continue;
		dfs(x+dx[i],y+dy[i]);
//		cout<<x+dx[i]<<" "<<y+dy[i]<<endl;
	}
	return;
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>grid[i][j];
		}
	}
	visited.resize(n, vector<bool>(m, false));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(visited[i][j])continue;
			area=0;
			dfs(i,j);
			if(area>maxarea){
				minpow=grid[i][j];
				maxarea=area;
			}else if(area==maxarea)minpow=min(grid[i][j],minpow);
		}
	}
	cout<<minpow<<" "<<maxarea<<endl;
}

