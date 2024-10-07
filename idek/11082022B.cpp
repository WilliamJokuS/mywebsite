#include <bits/stdc++.h>
using namespace std;
int q,n;
int a[100005];
int binser(int x){
	int l=1,r=n,ret=1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]>=x){
			r=mid-1;
			ret=mid;
		}else l=mid+1;
	}
	return ret;
}
int main(){
	int x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=a[i-1]+x;
	}
	cin>>q;
	while(q--){
		cin>>x;
		cout<<binser(x)<<endl;
	}
}

