#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll sum=0;
ll diff[200005];
ll    a[200005];
int main(){
	int n,q,l,r;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=q;i++){
		cin>>l>>r;
		diff[l]++;
		if(r<n){
			diff[r+1]--;
		}
	}
	for(int i=1;i<=n;i++){
		diff[i]+=diff[i-1];
	}
	sort(a+1,a+n+1);
	sort(diff+1,diff+n+1);
	for(int i=1;i<=n;i++){
		sum+=a[i]*diff[i];
	}
	cout<<sum<<endl;
}
