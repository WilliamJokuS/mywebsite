#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=26101991;
ll n;
ll a[105];
pair<ll,ll> matrix[105][105];
ll memo[105][105];
ll memo2[105];
ll q1,q2;
void dp(ll l){
	for(int i=1;i<=n-l;i++){
		int j=i+l;
		ll mini=LLONG_MAX;
		for(int k=i;k<j;k++){
			ll tmp=memo[i][k]+memo[k+1][j]+matrix[i][k].first*matrix[i][k].second*matrix[k+1][j].second;
			if(mini==tmp)q2++;
			else if(tmp<mini){
				q2=1;
				mini=tmp;
			}
		}
		memo[i][j]=mini;
	}
	if(l==n-1)return;
	l++;
	dp(l);
}
ll dp2(ll x){
	if((x==0||x==1)||x==2)return 1;
	if(memo2[x]!=0)return memo2[x];
	ll tmp=0;
	for(int i=1;i<x;i++){
		tmp=(tmp+dp2(i)*dp2(x-i))%MOD;
	}
	memo2[x]=tmp;
	return memo2[x];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int q;
	cin>>n;
	for(int i=1;i<=n+1;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			matrix[i][j]=make_pair(a[i],a[j+1]);
		}
	}
	cin>>q;
	if(q==1){
		dp(1);
		cout<<memo[1][n]<<endl;
	}else if(q==2){
		dp(1);
		cout<<q2%MOD<<endl;
	}else{
		cout<<dp2(n)<<endl;
	}
	return 0;
}
