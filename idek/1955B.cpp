#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main(){
	int t,n,c,d;
	cin>>t;
	while(t--){
		vector<ll> arr,arr2;
		ll mini=1e9,x;
		cin>>n>>c>>d;
		for(int i=1;i<=n*n;i++){
			cin>>x;
			arr.pb(x);
			mini=min(mini,x);
		}
		sort(arr.begin(),arr.end());
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr2.pb(mini+i*c+j*d);
			}
		}
		sort(arr2.begin(),arr2.end());
		bool ans=true;
		for(ll i=0;i<n*n;i++){
			//cout<<arr[i]<<arr2[i]<<endl;
			if(arr[i]!=arr2[i])ans=false;
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
