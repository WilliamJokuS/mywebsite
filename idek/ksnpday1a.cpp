#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1e9+7;
ll f[55];

int masukdata(){
	int idx=2;
	while(f[idx-1]<=1e9){
		f[idx]=f[idx-1]+f[idx-2];
		idx++;
	}
	return idx-1;
}
ll cara(int idx,ll x,ll k){
	if(x==0&&k==0)return 1;
	if(x==0&&k!=0)return 0;
	if(x<0) return 0;
	if(x>0&&k==0)return 0;
	if(x>f[idx]*k)return 0;
	return (cara(idx,x-f[idx],k-1)+cara(idx-1,x,k))%MOD;
}
int main(){
	f[0]=1;
    f[1]=2;
	int start=masukdata();
	ll t,x,k;
	cin>>t;
	while(t--){
		cin>>x>>k;
		cout<<cara(start,x,k)<<endl;
	}
}
