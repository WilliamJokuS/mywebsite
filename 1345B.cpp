#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int binser(int x){
	ll l=1,r=100000,ret=0;
	while(l<=r){
		ll mid=(l+r)/2;;
		ll tmp=mid*(3*mid+1)/2;
		if(tmp<=x){
			ret=mid;
			l=mid+1;
		}else r=mid-1;
	}
	return ret*(3*ret+1)/2;
}
int main(){
	cin>>t;;
	while(t--){
		int n,ans=0;
		cin>>n;
		while(binser(n)>0){
			n-=binser(n);
			ans++;
		}
		cout<<ans<<endl;
	}

}
