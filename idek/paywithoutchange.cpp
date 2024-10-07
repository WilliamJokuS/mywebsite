#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll tmp,t,a,b,n,s;
	cin>>t;
	while(t--){
		cin>>a>>b>>n>>s;
		tmp=a*n+b;
		if(tmp<s)cout<<"NO\n";
		else if(s%n<=b)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
