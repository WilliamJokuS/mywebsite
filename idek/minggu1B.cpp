#include <bits/stdc++.h>
using namespace std;
int n,q;
int a[100005];
int binser(int x){
	int l=1,r=n,ret=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<=x){
			ret=mid;
			l=mid+1;
		}else{
			r=mid-1;
		}
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	cin>>q;
	int x;
	for(int i=1;i<=q;i++){
		cin>>x;
		cout<<binser(x)<<endl;
	}
}
