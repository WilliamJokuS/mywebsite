#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll memo[35][41];

ll dp(ll n, ll mask){
	if(n<0) return 0;
	else if(n==0) return 1;
	if(memo[n][mask]!=-1)return memo[n][mask];
	ll digit1 = mask/10;
	ll digit2 = mask%10;
	ll res = 0;
	if(digit1==0){
		if(digit2==0){
			res = dp(n-1,0) + dp(n-1,1) + dp(n-1,2);
		} else if(digit2==1){
			res = dp(n-1,10) + dp(n-1,11);
		} else{
			res = dp(n-1,20) + dp(n-1,22);
		}
	} else if(digit1==1){
		if(digit2==0){
			res = dp(n-1,0) + dp(n-1,1);
		} else if(digit2==1){
			res = dp(n-1,10) + dp(n-1,11) + dp(n-1,12);
		} else{
			res = dp(n-1,21) + dp(n-1,22);
		}
	} else{
		if(digit2==0){
			res = dp(n-1,0) + dp(n-1,2);
		} else if(digit2==1){
			res = dp(n-1,12) + dp(n-1,11);
		} else{
			res = dp(n-1,20) + dp(n-1,21) + dp(n-1,22);
		}
	}
	memo[n][mask] = res;
	return res;
}

int main(){
	memset(memo,-1,sizeof memo);
	cin>>n;
	if(n==1){
		cout << 3 << endl;
		return 0;
	}
	ll ans = 0;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ans += dp(n-2,i*10+j);
//			cout << 1 << endl;
		}
	}
	cout << ans << endl;
}

