#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		ll ans=0;
		int a[200005];
		cin>>n>>k;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1,greater<int>());
		for(int i=1;i<=n;i++){
			if(i%2==1)ans+=a[i];
			else{
				ans-=a[i];
				int diskon=min(k,a[i-1]-a[i]);	
				ans-=diskon;
				k-=diskon;
			}
		}
		cout<<ans<<endl;
	}
}
