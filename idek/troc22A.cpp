#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	bool bisa=false;
	while(n>0){
		if(n%10==0)bisa=true;
		n/=10;
	}	
	if(bisa)cout<<"YES\n";
	else cout<<"NO\n";
}
