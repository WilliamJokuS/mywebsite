#include <bits/stdc++.h>
using namespace std;
int q,n;
int a[1000005];
bool binser(int x){
	int l=1,r=n;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x)return true;
		else if(a[mid]<x)l=mid+1;
		else r=mid-1;
	}
	return false;
}
int main(){
	int x;
	cin>>n>>q;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(q--){
		cin>>x;
		if(binser(x))cout<<"YES\n";
		else cout<<"NO\n";
	}
}
