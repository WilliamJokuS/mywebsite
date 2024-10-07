#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,k;
ll binser(ll x){
	ll l=1,r=n*m+1,ret=1;
	while(l<=r){
		ll mid=(l+r)/2;
		ll cnt=0;
		for(int i=1;i<=n;i++){
			cnt+=min(m,(mid-1)/i);
		}
	//	cout<<mid<<" "<<cnt<<endl;
		if(cnt>x-1)r=mid-1;
		else{
			ret=mid;
			l=mid+1;
		}
	}
	return ret;
}
int main(){
	cin>>n>>m>>k;
	cout<<binser(k)<<endl;
}

