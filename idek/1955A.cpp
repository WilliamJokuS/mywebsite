#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,a,b;
	cin>>t;
	while(t--){
		cin>>n>>a>>b;
		if(2*a<=b)cout<<n*a<<endl;
		else cout<<(n%2)*a+b*(n/2)<<endl;
	}
}
