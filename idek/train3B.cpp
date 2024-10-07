#include <bits/stdc++.h>
using namespace std;
int a[30005];
int main(){
	int n,t,idx=1;
	cin>>n>>t;
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	while(idx!=t){
		idx+=a[idx];
		if(a[idx]==0)break;
	}
	if(idx==t)cout<<"YES\n";
	else cout<<"NO\n";
}
