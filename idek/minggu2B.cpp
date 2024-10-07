#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
map <ll,ll>memo;
ll dp(ll x){
	if(x<12)return x;
	if(memo.find(x)!=memo.end())return memo[x];
	return memo[x]=dp(x/2)+dp(x/3)+dp(x/4);
}
int main(){
	ll x;
	while(cin>>x){
		cout<<dp(x)<<endl;
	}
}
