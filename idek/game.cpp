#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow(ll x, ll n){
	if(n==0)return 1;
	else if(n==1)return x;
	ll tmp=pow(x,n/2);
	if(n%2==0)return tmp*tmp;
	else return tmp*tmp*x;
}
int main(){
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    vector<ll> primes;
    bool sieve[1000005];
    for(ll i=2;i<=1e6;i++){
    	if(sieve[i])continue;
    	for(ll j=2*i;j<=1e6;j+=i)sieve[j]=true;
	}
	for(ll i=2;i<=1e6;i++){
		if(!sieve[i])primes.push_back(i);
	}
	ll n,k,t;
	cin>>t;
	while(t--){
		bool alice=false;
		cin>>n>>k;
		if(k==1){
			cout<<"Alice\n";
			continue;
		}
		for(int i=0;i<primes.size();i++){
			ll test=pow(primes[i],k);
			if(test>n)break;
			if(n%test==0){
				alice=true;
				break;
			}
		}
		if(alice)cout<<"Alice\n";
		else cout<<"Bob\n";
	}
}
