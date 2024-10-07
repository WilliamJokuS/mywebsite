#include <bits/stdc++.h>
using namespace std;
int t,n,sz;
string s;
int  a[105];
int f(int x){
	if(x<0)return 10+x;
	else return x%10; 
}
void solve(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>sz;
		cin>>s;
		for(int j=0;j<sz;j++){
			if(s[j]=='D')a[i]=f(a[i]+1);
			else a[i]=f(a[i]-1);
		}
	}
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
}
