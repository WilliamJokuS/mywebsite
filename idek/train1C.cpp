#include <bits/stdc++.h>
using namespace std;
int n,c;
int a[100005];
int INF=1e9;
bool cek(int val){
	int idx=1;
	int tmp=a[0];
	for(int i=1;i<n;i++){
		if(a[i]-tmp<val)continue;
		else{
			idx++;
			tmp=a[i];
			if(idx==c)return true;
		}
	}
	return false;
}
int binser(){
	int l=0,r=INF,ret=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(cek(mid)){
			ret=mid;
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return ret;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		scanf("%d %d",&n,&c);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		printf("%d\n",binser());
	}
}
