#include <bits/stdc++.h>
using namespace std;
int t,r,c,ans;
int memo[105][105];
int grid[105][105];
int dp(int x,int y){
	if(x==r)return grid[x][y];
	if(x<1||x>r||y<1||y>c)return -1e5;
	if(memo[x][y]!=-1)return memo[x][y];
	return memo[x][y]=grid[x][y]+max(dp(x+1,y),max(dp(x+1,y-1),dp(x+1,y+1)));
}
int main(){
	cin>>t;
	while(t--){
		memset(memo,-1,sizeof memo);
		ans=0;
		
		cin>>r>>c;
		for(int i=1;i<=r;i++){
			for(int j=1;j<=c;j++){
				cin>>grid[i][j];
			}
		}
		for(int i=1;i<=c;i++){
			ans=max(ans,dp(1,i));
		}
		cout<<ans<<endl;
	}
}
