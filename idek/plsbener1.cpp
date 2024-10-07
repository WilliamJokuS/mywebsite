#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll vaksin[1005],n,t,ans=0;
ll MOD=1e9+7;
int memo[1005][2];
int dp(int idx,int tipe){
	if(memo[idx][tipe]!=-1)return memo[idx][tipe];
	if(idx==n){
		if(tipe==t){
			return memo[idx][tipe]=1;
		}
		return memo[idx][tipe]=0;
	}
	return memo[idx][tipe]=dp(idx+1,tipe)+dp(idx+1,(tipe+vaksin[idx+1])%2);
}
int main(){
	cin>>n>>t;
	memset(memo,-1,sizeof memo);
	for(int i=1;i<=n;i++){
		cin>>vaksin[i];
	}
	for(int i=1;i<=n;i++){
		ans+=dp(i,vaksin[i]);
		ans%=MOD;
	}
	cout<<ans<<endl;
}
