#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[100005];
ll b[100005];
ll diff[100005];
int main(){
	cin >> n;
	ll ans = 0;
	for (ll i=1;i<=n;i++) {
		cin>>a[i]>>b[i];
		diff[i]=a[i]-b[i];
		ans+= b[i]*n-a[i];
	}
	sort(diff+1, diff+n+1, greater<ll>());
	for (ll i=1;i<=n;i++) {
		ans +=diff[i]*i;
	}
	cout<<ans<<endl;
}
