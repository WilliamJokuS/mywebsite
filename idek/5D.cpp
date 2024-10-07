#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[100005];
ll n,tmp,q;
ll binser(int x){
	ll l=1,r=n;
	ll ret=r;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<x){
			l=mid+1;
		}else{
			ret=mid;
			r=mid-1;
		}
	}
	if(a[ret]<=x)return ret;
	else if(a[ret]>x)return ret;
}
int main(){
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		a[i]=a[i-1]+tmp;
	}
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>tmp;
		cout<<binser(tmp)<<endl;
	}
}

