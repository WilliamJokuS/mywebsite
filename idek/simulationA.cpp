#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		int ans=1;
		cin>>n;
		while(ans*(ans+1)/2<=n)ans++;
		cout<<ans-1<<endl;
	}
}
