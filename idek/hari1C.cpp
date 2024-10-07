#include <bits/stdc++.h>
using namespace std;
int n,m,k,tmp;
int a[2005];
int cnt[2005];
int memo[2005][25];
bool sub3=true;
int dp(int idx,int kick){
	if(idx==n)return 1;
	if(memo[idx][kick]!=0)return memo[idx][kick];
	if(memo[idx-2][kick]<memo[idx-1][kick]&&idx>1){
		memset(cnt,0,sizeof cnt);
		cnt[a[idx-1]]=1;
	}
	cnt[a[idx]]++;
	if(cnt[a[idx]]>m){
		if(kick==0){
			memo[idx][kick]=dp(idx+1,kick)+1;
		}else memo[idx][kick]=min(dp(idx+1,kick)+1,dp(idx+1,kick-1));
	}else memo[idx+1][kick]=dp(idx+1,kick);
	return memo[idx][kick];
}
//5 1 0
//3 3 3 3 3
//15 1 2
//1 2 3 4 4 4 3 2 1 5 6 6 7 7 5
int main(){
	for(int i=0;i<=2005;i++){
		for(int j=0;j<=25;j++){
			memo[i][j]=0;
		}
	}
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=1)sub3=false;
	}
	if(sub3){
		if((n-k)%m!=0)cout<<((n-k)/m)+1;
		else cout<<(n-k)/m;
		cout<<"\n";
	}else cout<<dp(1,k)<<"\n";
	
}
