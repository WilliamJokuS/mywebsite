#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll jarak[100005];
ll binser(ll x){
	int l=1;
	int r=n;
	int ret=r;
	while(l<=r){
		int mid=(l+r)/2;
		if(jarak[mid]<x){
			l=mid+1;
		}else{
			ret=mid;
			r=mid-1;
		}
	}
	if(x<jarak[ret])return ret-1;
	return ret;
}
int main(){
	ll tmp,m;
	cin>>n>>m;	
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(i==1)jarak[i]=tmp;
		else jarak[i]=jarak[i-1]+tmp;
	}
	for(int i=1;i<=m;i++){
		cin>>tmp;
		cout<<binser(tmp)<<endl;
	}
	
}
