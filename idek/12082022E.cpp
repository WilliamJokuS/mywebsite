#include <bits/stdc++.h>
using namespace std;
int a[4005],sz[5];
int memo[4005];
int len,n;
int dp(int x){
	if(memo[x]!=-1)return memo[x];
	if(x==0)return 0;
	int tmp=-1;
	bool bisa=false;;
	for(int i=1;i<=3;i++){
		if(x==sz[i])bisa=true;
		if(x>=sz[i])tmp=max(tmp,dp(x-sz[i])+1);
	}
	if(tmp==-1){
		if(bisa)tmp=0;
		tmp=-1e5;
	}
	return memo[x]=tmp;
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>len;
	for(int i=1;i<=3;i++)cin>>sz[i];
	cout<<dp(len)<<endl;
}
