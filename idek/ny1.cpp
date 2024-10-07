#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,t;
	cin>>n>>m;
	string s[22];
	string j[22];
	for(int i=1;i<=n;i++){
		cin>>s[i];
	}
	for(int i=1;i<=m;i++){
		cin>>j[i];
	}
	cin>>t;
	int x;
	string a;
	string b;
	for(int i=1;i<=t;i++){
		cin>>x;
		if(x%n==0){
			a=s[n];
		}else{
			a=s[x%n];
		}
		if(x%m==0){
			b=j[m];
		}else{
			b=j[x%m];
		}
		cout<<a<<b<<endl;
	}
}
