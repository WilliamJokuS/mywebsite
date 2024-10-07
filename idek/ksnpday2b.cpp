#include <bits/stdc++.h>
using namespace std;
int b[100005];
int main(){
	int t,n;
	bool ans;
	cin>>t;
	while(t--){
		ans=true;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>b[i];
		}
		for(int i=n;i>=1;i--){
			if(b[i]>i)ans=false;
			else if(i%b[i]!=0)ans=false;
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
}

