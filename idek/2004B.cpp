#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int l1,l2,r1,r2,l,r,ans;
		cin>>l1>>r1;
		cin>>l2>>r2;
		
		if(l1>=l2)l=l1;
		else l=l2;
		if(r1<=r2)r=r1;
		else r=r2;
		
		if(l>r){
			cout<<max(1,r-l+2)<<endl;
			continue;	
		}
		else ans=r-l+2;
		if(l1==l2)ans--;
		if(r1==r2)ans--;
		cout<<ans<<endl;
	}
}
