#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,tmp,ret;
int a [100005];
int binser(int x){
	int l=1,r=n,ret=-1;
	while(l<=r){
	    int mid=(l+r)/2;
		if(a[mid]<x){
			l=mid+1;
		}else if(a[mid]>=x){
			r=mid-1;
			if(a[mid]==x)ret=mid-1;
		}
	}
	return ret;
}
int main(){
	int q;
	scanf("%d %d",&n,&q);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(q--){
		scanf("%d",&tmp);
		printf("%d\n",binser(tmp));
	}
}
