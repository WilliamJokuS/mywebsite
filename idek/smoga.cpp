#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
int main(){
	int idx,t;
	cin>>t;
	ll s,n;
	for(int i=1;i<=t;i++){
		cin>>n>>s;
		idx=0;
		ll sum=0;
		for(int j=1;j<=n;j++){
			cin>>a[j];
			sum+=a[j];
			if(sum>=s&&idx==0)idx=j;
		}
		if(sum<=s){
			cout<<0<<"\n";
			continue;
		}
		ll max=1;
		for(int j=1;j<=idx;j++){
			if(a[j]>=a[max]){
				max=j;
			}
		}
		if(a[max]<a[idx+1]){
			cout<<0<<"\n";
			continue;
		}
		cout<<max<<endl;
	}
}
