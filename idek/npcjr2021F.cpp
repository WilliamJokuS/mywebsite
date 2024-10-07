#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1e9+7;
ll n,s;
int main(){
	cin>>n>>s;
	ll mini=1*n;
	ll maks=n*s;
	cout<<((maks+mini)%MOD*(maks-mini+1))%MOD/2<<endl;  
}


