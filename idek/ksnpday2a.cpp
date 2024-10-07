#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int t,n,cnt;
	cin>>t;
	while(t--){
		cnt=0;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		if(a[1]!=a[2])cnt++;
		for(int i=2;i<n;i++){
			if(a[i]!=a[i+1]||a[i]!=a[i-1])cnt++;
		}
		if(a[n]!=a[n-1])cnt++;
		cout<<cnt<<endl;
	}
}
