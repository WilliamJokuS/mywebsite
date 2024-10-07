#include <bits/stdc++.h>
#define inf 100000000000000
using namespace std;
typedef long long ll; 
ll n,y;
ll bebek[10005];
ll dp[3][10005];
int main(){
	memset(dp,-1,sizeof dp);
	cin>>n>>y;
	for(int i=1;i<=n;i++){
		cin>>bebek[i];
	}
	dp[0][0] = 0;
	for(int i=1;i<=n;i++){
		for(int j=0;j<=y;j++){
			if(j<bebek[i]){
				dp[i%2][j] = dp[(i-1)%2][j];
				if(dp[i%2][j]==-1) dp[i%2][j] = 10000000;
				continue;
			}
			if(dp[(i-1)%2][j-bebek[i]]==-1) dp[(i+1)%2][j-bebek[i]] = 10000000;
			if(dp[(i-1)%2][j]==-1) dp[(i-1)%2][j] = 10000000;
			dp[i%2][j] = min(dp[(i-1)%2][j],dp[(i-1)%2][j-bebek[i]]+1);
			if(dp[i%2][j]==-1) dp[i%2][j] = 10000000;
		}
	}
	if(dp[n%2][y]>n) dp[n%2][y] = -1;
	cout << dp[n%2][y] << endl;
}
