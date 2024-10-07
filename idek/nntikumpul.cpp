#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll x){
	if(x==0)return 0;
	if(x<10)return x;
	ll cnt=9,d1=x,dn=x%10;
	cnt+=x/10;
	while(d1>9){
		d1/=10;
	}
	if(d1>dn)return cnt-1;
	else return cnt;
}
int main(){
	ll a,b;
	cin>>a>>b;
	cout<<f(b)-f(a-1)<<endl;
}
