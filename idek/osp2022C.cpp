#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
ll n,p,q;
ll mini=1e9+5;
ll a[100005],sa[100005];
ll binser(ll x){
	ll l=1,r=n,ret=0;
	while(l<=r){
		ll mid=(l+r)/2;
		if(sa[mid]>=x){
			ret=mid;
			r=mid-1;
		}else l=mid+1;
	}
	return ret;
}
ll binser2(ll x,ll low){
	ll l=low,r=n,ret=0;
	while(l<=r){
		ll mid=(l+r)/2;
		if(sa[mid]<=x){
			ret=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return ret-l+1;	
}
int main(){
	ll x;
    cin>>n>>p>>q;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	sa[i]=a[i];
	}
	sort(sa+1,sa+1+n);
	cin>>x;
	ll tmp=0;
	if(a[x]>p)tmp=a[x]-p;
	ll low=binser(tmp);
	cout<<low<<endl;
	ll ans=0;
    for(int i=low;i<=n;i++){
    	cout<<"a"<<endl;
    	if(sa[i]>a[x])break;
    	cout<<"ans "<<ans<<endl;
    	ans=max(ans,binser2(sa[i]+p,i));
	}
	cout<<ans<<endl;
}


