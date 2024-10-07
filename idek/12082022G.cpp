#include <bits/stdc++.h>
using namespace std;
int h,l,r,n,m;
int memo[2005][2005];
int a[2005];
int dp(int idx,int jam){
	if(idx>n)return 0;
	if(memo[idx][jam]!=-1)return memo[idx][jam];
	int sl1=dp(idx+1,(jam+a[idx])%h);
	int sl2=dp(idx+1,(jam+a[idx]-1)%h);
	if((jam+a[idx])%h>=l && (jam+a[idx])%h<=r)sl1++;
	if((jam+a[idx]-1)%h>=l && (jam+a[idx]-1)%h<=r)sl2++;
	return memo[idx][jam]=max(sl1,sl2);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
	cin>>n>>h>>l>>r;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<dp(1,0)<<endl;
	
}
