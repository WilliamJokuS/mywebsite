#include <bits/stdc++.h>
using namespace std;
int grid[1005][1005];
int n;
bool checkH(){
	for(int i=1;i<=n;i++){
		bool one=false;
		for(int j=1;j<=n;j++)if(grid[i][j]==1)one=true;
		if(one==false)return false;
	}
	return true;
}
bool checkV(){
	for(int i=1;i<=n;i++){
		bool one=false;
		for(int j=1;j<=n;j++)if(grid[j][i]==1)one=true;
		if(!one)return false;
	}
	return true;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++)cin>>grid[i][j];
		}
		if(checkH()&&checkV())cout<<"Yes\n";
		else cout<<"No\n";
	}
	
}
