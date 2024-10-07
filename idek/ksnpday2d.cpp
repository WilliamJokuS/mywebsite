#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cek(ll i,ll len,ll n){
	while(n>=2){
		if(len/2+1==i)return n%2;
		i=min(i,len+1-i);
		len/=2;
		n/=2;
	}
	return n;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,tmp,cnt=1,ans=0,l,r;
	cin>>n>>l>>r;
	tmp=n;
	while(tmp>0){
		tmp/=2;
		cnt*=2;
	}
	cnt--;
	for(ll i=l;i<=r;i++){
		if(cek(i,cnt,n))ans++;
	}
	cout<<ans<<endl;
}

  
