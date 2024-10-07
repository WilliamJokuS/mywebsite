#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,maks=0,mini=1e9,tmp;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>tmp;
		maks=max(maks,tmp);
		mini=min(mini,tmp);
	}
	cout<<(maks-mini+1)/2<<endl;
}
