#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
#define pii pair<int,int>
using namespace std;
typedef long long ll;
pair<int,pii> a[10005];
int memo[20005];
int n;
int dp(int hari){
	if(memo[hari]!=-1)return memo[hari];
	memo[hari]=0;
	for(int i=1;i<=n;i++){
		if(a[i].fi>=hari){
			memo[hari]=max(memo[hari],dp(a[i].se.fi+1)+a[i].se.se);
		}
	}
	return memo[hari];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i].fi>>a[i].se.fi>>a[i].se.se;
	}
	sort(a+1,a+1+n);
	cout<<dp(1)<<endl;
}


