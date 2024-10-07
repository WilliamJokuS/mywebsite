#include <iostream>
using namespace std;
void floodfill(a[r][c],){
	if(x<0||y<0||x>=r||y>=c)return;
	if(vis[x][y]);
	if(maps[x][y]);
	vis[x][y];
	cnt++;
	floodfill(a[r-1][c]);
	floodfill(a[r+1][c]);
	floodfill(a[r][c-1]);
	floodfill(a[r][c+1]);
}
int main(){
	int r,c;
	cin>>r>>c;
	char a[r][c];
	bool b[r][c];
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=r;i++){
		for(int j=0;j<=c;j++){
			if(maps[i][j]=="#")continue;
			if(vis[i][j])continue;
			
			cnt=0;
			floodfill(i,j);
		}
	}
	
	
}
