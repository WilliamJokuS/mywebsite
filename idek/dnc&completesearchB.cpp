#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005];
int n,q,tmp;
int binser(int x){
	int l=0,r=n-1;
	int ret=r;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<=x){
			l=mid+1;
		}else{
			ret=mid;
			r=mid-1;
		}
	}
	
	if(a[ret]<=x)return ret+1;
	else if(a[ret]>x)return ret;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>tmp;
		cout<<binser(tmp)<<endl;
	}
}
