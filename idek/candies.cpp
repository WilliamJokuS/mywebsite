#include <bits/stdc++.h>
using namespace std;
int main(){
	int t,n,tot=0,tmp;
	cin>>t;
	while(t--){
		cin>>n;
		tot=0;
		for(int i=1;i<=n;i++){
			cin>>tmp;
			tot+=tmp;
		}
		if(tot%2==0)cout<<"\NO\n";
		else cout<<"YES\n";
	}
}
