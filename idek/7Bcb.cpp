#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
int cap,n;
int harga[105],berat[105];
int memo[105][2005];
int dp(int idx,int cur){
	if(idx>n)return 0;
	if(memo[idx][cur]!=-1)return memo[idx][cur];
	memo[idx][cur]=dp(idx+1,cur);
	if(cur+berat[idx]<=cap){
		memo[idx][cur]=max(memo[idx][cur],dp(idx+1,cur+berat[idx])+harga[idx]);
	}
	return memo[idx][cur];
}
void bt(int idx,int cur){
	if(idx>n)return;
	while(dp(idx,cur)==dp(idx,cur+1)&&cur+1<=cap)cur++;
	if(cur+berat[idx]<=cap){
		if(memo[idx+1][cur+berat[idx]]+harga[idx]>=memo[idx+1][cur]){
			cout<<idx<<endl;
			bt(idx+1,cur+berat[idx]);
		}
		else bt(idx+1,cur);
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
    cin>>cap>>n;
    for(int i=1;i<=n;i++){
    	cin>>berat[i]>>harga[i];
	}
	int tmp=dp(1,0);
	bt(1,0);
}


