#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;
		int a[45];
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		if(n>2)cout<<"NO\n";
		else if((a[2]-a[1])==1)cout<<"NO\n";
		else cout<<"YES\n";
	}
}
