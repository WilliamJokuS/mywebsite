#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,q;
ll memo[6][7500];
int coin[6]={0,1,2,3};
ll dp(ll idx,ll x){
	if(idx==1||x==0)return memo[idx][x]=1;
	if(memo[idx][x]!=-1)return memo[idx][x];
	ll ans=0;
	if(idx==0){
		for(int i=1;i<=3;i++){
			if(x>=coin[i])ans+=dp(i,x-coin[i]);
		}
		return memo[idx][x]=ans;
	}
	for(int i=1;i<=idx;i++){
		if(x>=coin[i])ans+=dp(i,x-coin[i]);
	}
	return memo[idx][x]=ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
	int x;
	while(cin>>x){
		cout<<dp(0,x)<<endl;
	}
}
