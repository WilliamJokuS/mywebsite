#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;
	ll candy,child;
	cin>>t;
	for(ll i=1;i<=t;i++){
		cin>>candy>>child;
		if(candy%child==0){
			cout<<candy<<endl;
			continue;
		}
		if(candy<child){
			if(candy<child/2){
				cout<<candy<<endl;
			}
			else{
				cout<<child/2<<endl;
			}
			continue;
		}
		ll nmax=child/2;
		ll nmin=child-nmax;
		ll min= candy/child;
		ll max=min+1;
		ll jwb=nmax*max+nmin*min;
		if(jwb>candy)cout<<candy<<endl;
		else cout<<jwb<<endl;
	}
}
