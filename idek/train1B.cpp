#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int a[1000005];
ll binser(){
	ll l=0,r=1000000,ret;
	while(l<=r){
		ll mid=(l+r)/2;
		ll tmp=0;
		for(ll i=1;i<=n;i++){
			tmp+=max(0ll,a[i]-mid);
		}
		if(tmp>=m){
			ret=l;
			l=mid+1;
		}
		else{
			r=mid-1;
			ret=r;
		}
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	printf("%lld\n",binser());
}
//complexity : O(log10^3 * N)
