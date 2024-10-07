#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[55];
ll dp(ll x){
	if(x==0||x==1)return 1;
	if(memo[x]!=0)return memo[x];
	ll cnt=0;
	for(int i=0;i<x;i++)cnt+=dp(i)*dp(x-i-1);
	memo[x]=cnt;
	return memo[x];
}
int main(){
	ll n;
	cin>>n;
	cout<<dp(n/2)<<endl;
}
