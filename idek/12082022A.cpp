#include <bits/stdc++.h>
using namespace std;
int a[100005];
int memo[100005];
int n;
int dp(int x){
	if(memo[x]!=-1)return memo[x];
	if(x==n)return 0;
	if(x==n-1)return abs(a[x]-a[x+1]);
	else return memo[x]=min(dp(x+1)+abs(a[x]-a[x+1]),dp(x+2)+abs(a[x]-a[x+2]));
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<dp(1)<<endl;
}
