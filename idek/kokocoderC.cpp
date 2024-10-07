#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k;
ll f(ll x){
	ll cnt=0;
	while(x>0){
		if(x%2==1)cnt++;
		x/=2;
	}
	return cnt;
}
ll a[2005];
int main(){
	ll ans=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(f(a[i]|a[j])+f(a[i]&a[j])>=k){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
