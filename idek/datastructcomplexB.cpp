#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t,n,k;
	cin>>t;
	while(t>0){
		t--;
		cin>>n>>k;
		if(n%2!=k%2)cout<<"NO\n";
		else if(n<k*k)cout<<"NO\n";
		else{
			cout<<"YES\n";
		}
	}
}
