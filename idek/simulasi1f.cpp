#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
ll memo[100005];
ll itung(ll x,ll k){
	if(memo[x]!=-1)return memo[x];
	else if(x<k)memo[x]=1;
	else{
		ll cnt=1;
		for(int i=1;i<=100000;i++){
			if(x>=k*i)cnt+=x-k*i+1;
			else break;
		}
		memo[x]=cnt%1000000007;
	}
	return memo[x];
}
int main(){
	memset(memo,-1,sizeof memo);
	int t;
	cin>>t>>k;
	while(t>0){
		t--;
		ll a,b,sum=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			sum+=itung(i,k);	
		}
		cout<<sum%1000000007<<endl;
	}
}
