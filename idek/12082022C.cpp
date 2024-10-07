#include <bits/stdc++.h>
using namespace std;
int a[3][100005];
int memo[3][100005];
int ans=0,n,k;
int dp(int type,int idx){
	if(idx==n)return a[type][n];
	if(memo[type][idx]!=-1)return memo[type][idx];
	int tmp=0;
	for(int i=0;i<3;i++){
		if(i==type)continue;
		tmp=max(tmp,dp(i,idx+1));
	}
	return memo[type][idx]=tmp+a[type][idx];
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[0][i]>>a[1][i]>>a[2][i];
	for(int i=0;i<3;i++){
		ans=max(ans,dp(i,1));
	}
	cout<<ans<<endl;
}
