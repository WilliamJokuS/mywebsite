#include <bits/stdc++.h>
using namespace std;
int n,cap;
int memo[2005][2005];
int sz[2005],val[2005];
int knap(int idx,int w){
	if(idx>n)return 0;
	if(memo[idx][w]!=-1)return memo[idx][w];
	if(w+sz[idx]>cap)return knap(idx+1,w);
	int ambil=knap(idx+1,w+sz[idx])+val[idx];
	int lewat=knap(idx+1,w);
	return memo[idx][w]=max(ambil,lewat);
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>cap>>n;
	for(int i=1;i<=n;i++)cin>>sz[i]>>val[i];
	cout<<knap(1,0)<<endl;
}
