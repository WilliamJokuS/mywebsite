#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[10005][10005];
ll fact[20005];
ll mod=1e9+7,m,n,ans=0;
ll fastexpo(ll val,ll times){
	if(times==0)return 1;
	if(times==1)return val%mod;
	ll tmp=fastexpo(val,times/2)%mod;
	tmp=(tmp*tmp)%mod;
	if(times%2==1)return (tmp*val)%mod;
	return tmp; 
}
ll c(int p,int k){
	ll ret=fact[p];
	ret*=fastexpo(fact[p-k],mod-2);
	ret%=mod;
	ret*=fastexpo(fact[k],mod-2);
	ret%=mod;
	return ret;
}
int itung(int size,int num){
	int ret=0;
	for(int i=0;i<m;i++){
		ret+=c(num+i-1,i);
		cout<<num+i-1<<"C"<<i<<" "<<ret<<endl;
	}
	return ret;
}
//n digit berbeda dengan panjang M
// n-1  n  n+1 ...  n+m-2 
// 0    1   2  ...  m-1
int main(){
	fact[0]=1;
	for(int i=1;i<=n;i++){
		fact[i]=(i*fact[i-1])%mod;
	}
	cout<<c(1,0)<<c(1,1)<<endl;
	cin>>n>>m;
	ll left,right,lastl=0;
	for(int i=1;i<=n;i++){
		left=itung(m,i);
		cout<<"l"<<left<<endl;
		left-=lastl;
		lastl+=left;
		right=(m,n-i+1);
		cout<<left<<" "<<right<<endl;
		ans+=(left*right)%m;
	}
	cout<<ans<<endl;
}
