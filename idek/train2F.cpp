#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005],n;
int main(){
	while(true){
		ll ans=0;
		cin>>n;
		if(n==0)return 0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			if(a[i]==0)continue;
			ans+=abs(a[i]);
			a[i+1]+=a[i];
		}
		cout<<ans<<endl;
	}
}
