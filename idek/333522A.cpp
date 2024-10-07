#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int grid[105][105];
bool cek(int i, int j){
	if(grid[i-1][j]==1)return false;
	if(grid[i+1][j]==1)return false;
	if(grid[i-1][j+1]==1)return false;
	if(grid[i+1][j+1]==1)return false;
	if(grid[i-1][j-1]==1)return false;
	if(grid[i+1][j-1]==1)return false;
	if(grid[i][j+1]==1)return false;
	if(grid[i][j-1]==1)return false;
	return true;
}
int main(){
	int n;
	string tmp;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		for(int j=1;j<=n;j++){
			grid[i][j]=tmp[j-1]-'0';
		}
	}
	bool nope=true;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(grid[i][j]==0)continue;
			if(cek(i,j)==false){
				nope=false;
				cout<<i-1<<" "<<j-1<<endl;
			}
		}
	}
	if(nope)cout<<0<<endl;
}
