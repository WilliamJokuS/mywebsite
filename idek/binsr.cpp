#include <bits/stdc++.h>
using namespace std;
int q,n;
int a[100005];
int binser(int x){
	int l=0,r=n-1,ret=-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			ret=mid;
			r=mid-1;
		}
		if(x>a[mid])l=mid+1;
		else r=mid-1;
	}
	return ret;
}
int main(){
	vector<int> ans;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		ans.push_back(binser(x));		
	}
	for(auto i:ans)cout<<i<<endl;
}
