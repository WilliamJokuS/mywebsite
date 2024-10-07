#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
ll MOD=1e9+7;
ll f[1000005];
vector<int> good;
ll inverse(ll x,ll y){
	if(y==0)return 1;
	if(y==1)return x%MOD;
	ll ret=inverse(x,y/2)%MOD;
	ret=(ret*ret)%MOD;
	if(y%2==0)return ret%MOD;
	else return (ret*x)%MOD;
}
ll ncr(int n, int r){
    if(n<r)return 0;
    if(n==r)return 1;
    ll ret= f[n];
    ret*=inverse(f[r],MOD-2);
    ret%=MOD;
    ret*=inverse(f[n-r],MOD-2);
    ret%=MOD;
    return ret;
}
int main(){
	int a,b,n,tmp;
	ll ans=0;
	cin>>a>>b>>n;
	f[0]=1;
	for(int i=1;i<=n;i++){
		f[i]=i*f[i-1];
		f[i]%=MOD;
	}
	if(a>b)swap(a,b);
	for(int i=a*n;i<=b*n;i++){
		bool gud=true;
		tmp=i;
		while(tmp>0){
			if(tmp%10!=a&&tmp%10!=b)gud=false;
			tmp/=10;
		}
		if(gud)good.pb(i);
	}
	for(int i=0;i<good.size();i++){
		//cout<<good[i]<<endl;
		if((good[i]-a*n)%(b-a)==0)ans+=ncr(n,(good[i]-a*n)/(b-a));
		ans%=MOD;
	}
	cout<<ans<<endl;
}

