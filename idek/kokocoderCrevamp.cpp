#include <bits/stdc++.h>
using namespace std;
int f(int x){
	int ret=0;
	while(x>0){
		if(x%2==1)ret++;
		x/=2;
	}
	return ret;
}
int a[200005];
int n,k;
int main(){
	long long ans=0;
	int x;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x;
		a[i]=f(x);
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++){
		int l=i+1,r=n,tmp=n+1;
		while(l<=r){
			int mid=(l+r)/2;
			if(a[i]+a[mid]>=k){
				tmp=mid;
				r=mid-1;
			}else{
				l=mid+1;
			}
		}
		ans+=n-tmp+1;
		cout<<ans<<endl;
	}
	cout<<ans<<endl;
}
