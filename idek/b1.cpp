#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],n,q,tmp;
int binser(ll x){
	ll l=1,r=n,ret=0;
	while(l<=r){
		ll mid=(l+r)/2;
		if(a[mid]>x){
			r=mid-1;
		}else{
			l=mid+1;
			ret=mid;
		}
	}
	return ret;
}
int main(){
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		a[i]=tmp+a[i-1];
	}
	while(q--){
		cin>>tmp;
		cout<<binser(tmp)<<endl;
	}
	
}
