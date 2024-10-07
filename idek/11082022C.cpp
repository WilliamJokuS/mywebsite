#include <bits/stdc++.h>
using namespace std;
int q,n;
int a[200005];
int binser(int x){
	int l=1,r=n,ret=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(x>a[mid])r=mid-1;
		else{
			l=mid+1;
			ret=mid;
		}
	}
	return ret;
}
int main(){
	int x;
	cin>>n>>q;;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
	while(q--){
		cin>>x;
		cout<<binser(x)<<endl;
	}
}
//5 4 3 2 1
//

