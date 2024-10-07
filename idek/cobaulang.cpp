#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
ll n,m;
ll h[1005],k[1005],d[1005];
ll memo[1005][10005];
ll dp(ll idx,ll uang){
	if(memo[idx][uang]!=-1)return memo[idx][uang];
	if(idx>n)return 0;
	memo[idx][uang]=dp(idx+1,uang);
	if(uang>=h[idx]){
		if(d[idx]==1)memo[idx][uang]=max(memo[idx][uang],dp(idx+1,uang-h[idx])+k[idx]);
		else memo[idx][uang]=max(memo[idx][uang],dp(idx,uang-h[idx])+k[idx]);
	}
	return memo[idx][uang];
}
void backtrack(ll idx,ll uang){
	//if(memo[idx][uang]!=-1)return memo[idx][uang];
	if(idx>n)return;
	if(memo[idx][uang]==memo[idx+1][uang]){
		backtrack(idx+1,uang);
	}
	if(uang>=h[idx]){
		if(d[idx]==1){
			cout<<k[idx]<<endl;
			backtrack(idx+1,uang-h[idx]);
		}
		else{
			cout<<k[idx]<<endl;
			backtrack(idx,uang-h[idx]);
		}
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>h[i]>>k[i]>>d[i];
	}
	cout<<dp(1,m)<<endl;
	backtrack(1,m);
}


