#include <bits/stdc++.h>
using namespace std;
int n;
int a[100005];
int binser(int x){
	int l=1,r=n,ret=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(x>a[mid])l=mid+1;
		else if(x<a[mid])r=mid-1;
		else if(x==a[mid]){
			ret=mid;
			r=mid-1;
		}
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int q,tmp;
	scanf("%d %d",&n,&q);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	while(q--){
		scanf("%d",&tmp);
		printf("%d\n",binser(tmp)-1);
	}
}
//complexity : O(QlogN)
