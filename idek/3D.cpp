#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n;
ll a[100005];
ll lower(ll z){
	ll l=1,r=n,mid,tmp;
	while(l<=r){
		mid=(l+r)/2;
		if(z>=a[mid]){
			l=mid+1;
			tmp=mid;
		}
		else if(z<a[mid]){
			r=mid-1;
			tmp=r;
		}
	}
	return tmp;
}

int main(){
	ll x,y,q;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>q;
	while(q--){
		cin>>x>>y;
		cout<<lower(y)-lower(x)<<endl;
	}
}
