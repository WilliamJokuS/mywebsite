#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
ll binser(){
	ll l=1,r=n*m+1;
	while(l<=r){
		ll mid=(l+r)/2;
		ll tmp=0;
		for(ll i=1;i<=n;i++){
			tmp+=min(m,(mid-1)/i);
		}
		if(tmp<k)l=mid+1;
		else r=mid-1;
	}
	return l-1;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	scanf("%lld %lld %lld",&n,&m,&k);
	
	
	printf("%lld\n",binser());
}
//complexity : O(logNM * N)
