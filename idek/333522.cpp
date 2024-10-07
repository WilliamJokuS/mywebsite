#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
ll k,n;
ll    a[300005];
ll diff[300005];

int main(){
	ll tot=0,sisa;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sisa=k%n;
	sort(a+1,a+n+1);
	for(int i=1;i<n;i++)diff[i]=a[i+1]-a[i];
	sort(diff+1,diff+n);
	for(int i=1;i<=n-sisa;i++)tot+=diff[i];
	cout<<tot<<endl;
}
