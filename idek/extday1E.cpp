#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map<int,ll> memo;
ll dp(ll n){
	if(memo[n])return memo[n];
	if(n<12)return n;
	return memo[n]=max(n,dp(n/2)+dp(n/3)+dp(n/4));
}
int main(){
	ll n;
   	while(cin>>n){
   		cout<<dp(n)<<endl;
   	}
}
