#include <bits/stdc++.h>
using namespace std;
int a[100005];
int memo[100005];
int n,k;
int dp(int x){
	if(memo[x]!=-1)return memo[x];
	if(x==n)return 0;
	int tmp=INT_MAX;
	for(int i=1;i<=k;i++){
		if(x+i>n)continue;
		tmp=min(tmp,dp(x+i)+abs(a[x]-a[x+i]));
	}
	return memo[x]=tmp;
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>k;
	for(int i=1;i<=n;i++)cin>>a[i];
	cout<<dp(1)<<endl;
}
