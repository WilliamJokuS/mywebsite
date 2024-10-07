#include <bits/stdc++.h>
using namespace std;
int n;
int a[25],lis[25];
int ans=1;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	lis[1]=1;
	for(int i=2;i<=n;i++){
		lis[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]<a[i])lis[i]=max(lis[i],lis[j]+1);
		}
		ans=max(ans,lis[i]);
	}
	cout<<ans<<endl;
}

