#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,q;
int a[100005];
ll binser(ll x){
	ll l=1,r=1e5,ret=1;
	while(l<=r){
		ll mid=(l+r)/2;
		if(mid*(mid+1)/2>x){
			ret=mid-1;
			r=mid-1;
		}else{
			l=mid+1;
		}
	}
	ll tmp=x-ret*(ret+1)/2;
	if(tmp==0)return ret;
	else return tmp;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll x;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(x==1){
		cout<<a[1]<<endl;
		return 0;
	}
	cout<<a[binser(x)]<<endl;
}
