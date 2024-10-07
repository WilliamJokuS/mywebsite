#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ans=0,cur=0;
		cin>>n;
		int a[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]==0){
				cur++;
				ans=max(ans,cur);
			}else cur=0;
		}
		cout<<ans<<endl;
	}
}
