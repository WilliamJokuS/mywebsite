#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int n,l,r,ans=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(j%i==0)a[j]++;
		}
	}
	int  cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]>0)cnt++;
		cout<<i<<" "<<a[i]<<endl;
	}
	cout<<cnt<<endl;
}
