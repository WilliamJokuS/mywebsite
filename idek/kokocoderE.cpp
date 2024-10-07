#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
pair<int,int> a[100005];
int dp[100005];
int n,ans=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].fi>>a[i].se;
	}
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(a[j].fi<a[i].fi&&a[j].se<a[i].se)dp[i]=max(dp[i],dp[j]+1);
		}
		ans=max(ans,dp[i]);
	}
	cout<<ans<<endl;
}
