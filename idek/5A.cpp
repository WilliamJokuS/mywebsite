#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[300005],n,m;
ll tot(ll x){
	ll cnt=0;
	for(int i=1;i<=n;i++)cnt+=x/a[i];
	return cnt;
}
ll lower(ll x){
	ll tmp,l=1,r=LLONG_MAX;
	while(l<=r){
		ll mid=(l+r)/2;
		ll test=tot(mid);
		if(x>test){
			l=mid+1;
			tmp=mid;
		}else if(x<=test){
			r=mid-1;
			tmp=r;
		}else return mid;
	}
	return tmp;
}
ll upper(ll x){
	ll tmp,l=1,r=LLONG_MAX;
	while(l<=r){
		ll mid=(l+r)/2;
		ll test=tot(mid);
		if(x>=test){
			l=mid+1;
			tmp=mid;
		}else if(x<test){
			r=mid-1;
			tmp=r;
		}else return mid;
	}
	return tmp;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<upper(m)-lower(m)<<endl;
}
