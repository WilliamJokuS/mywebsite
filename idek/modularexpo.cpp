#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll b,e,mod;
ll pangkat(ll b,ll e){
	if(e==1)return b;
	ll tmp =pangkat(b,e/2)%mod;
	ll ans=(tmp*tmp)%mod;
	if(e%2==1)ans=(ans*b)%mod;
	return ans;
}
int t;
int main(){
	cin>>t;
	while(t--){
		cin>>b>>e>>mod;
		cout<<pangkat(b,e)<<endl;
	}
}
