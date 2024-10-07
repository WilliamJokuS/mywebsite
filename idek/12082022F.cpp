#include <bits/stdc++.h>
using namespace std;
int n,m;
int memo[1005][1005];
int a[1000005];
bool dp(int idx,int curr,bool ambil){
	if(idx>n){
		if(ambil&&curr%m==0)return true;
		else return false;
	}
	if(memo[idx][curr]!=-1)return memo[idx][curr];
	if(curr%m==0&&ambil)return memo[idx][curr]=1;
	return memo[idx][curr]=(dp(idx+1,(curr+a[idx])%m,ambil+1)||dp(idx+1,curr,ambil+0));
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]%=m;
	}
	if(n>m)cout<<"YES\n";
	else if(dp(1,0,false))cout<<"YES\n";
	else cout<<"NO\n";
}
