#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,tmp;
ll pos[100005];
ll binser(ll x){
	ll l=1,r=n,ret=0;
	while(l<=r){
		ll mid=(l+r)/2;
		if(x>=pos[mid]){
			l=mid+1;
			ret=mid; 
		}else{
			r=mid-1;
		}
	}
	return ret;
}
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>pos[i];
		pos[i]+=pos[i-1];
	}
	while(k--){
		cin>>tmp;
		cout<<binser(tmp)<<endl;
	}
	
}
