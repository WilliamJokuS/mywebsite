#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
ll berat[105],harga[105];
ll memo [105][2005];
ll n,k;
bool ans[105];
ll inf=1e9;
ll dp(ll idx,ll w){
	if(w>n)return -inf;
	if(idx>k)return 0;
	if(memo[idx][w]!=-1)return memo[idx][w];
	ll lewat=dp(idx+1,w);
	ll ambil=harga[idx]+dp(idx+1,w+berat[idx]);
	return memo[idx][w]=max(ambil,lewat);
}
void backtrack(ll idx,ll w){
	if(idx>k)return;
	while(dp(idx,w)==dp(idx,w+1)&&w+1<=n)w++;
	cout<<idx<<" "<<w<<endl;
	ll lewat=dp(idx+1,w);
	ll ambil=harga[idx]+dp(idx+1,w+berat[idx]);
	if(ambil>=lewat&&w+berat[idx]<=n){
		ans[idx]=true;
		backtrack(idx+1,w+berat[idx]);
	}else backtrack(idx+1,w);
}
int main(){
	memset(memo,-1, sizeof memo);
	memset(ans,0, sizeof ans);
	cin>>n>>k;
	for(ll i=1;i<=k;i++){
		cin>>berat[i]>>harga[i];
	}
	ll tmp = dp(1,0);
	for(int i=1;i<=k;i++){
		for(int j=1;j<=n;j++){
			cout<<memo[i][j]<<" ";
		}
		cout<<endl;
	}
	backtrack(1,0);
	for(int i=1;i<=k;i++)if(ans[i])cout<<i<<endl;
	
}
