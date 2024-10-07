#include <bits/stdc++.h>
using namespace std;
int k;
int f(int n,int m){
	if(n<=k-1)return n+1;
	if(k-1<n&&n<=m)return k;
	if(k-1<n-m&&n>m)return n-m;
	if(k-1>=n-m&&n>m&&n>k-1)return k;
}
int main(){
	int n,m;
	cin>>n>>m>>k;
	cout<<f(n,m);
}


