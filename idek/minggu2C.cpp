#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> pos;
int memo[55][55];
int len,tmp,n;
int dp(int l,int r){
	if(memo[l][r]!=-1)return memo[l][r];
	if(l+1>=r)return memo[l][r]=0;
	int ret=1e9;
	for(int i=l+1;i<r;i++){
		ret=min(ret, dp(l,i)+dp(i,r)+pos[r]-pos[l]);
	}
	return memo[l][r]=ret;
}
int main(){
	while(true){
		memset(memo,-1,sizeof memo);
		pos.clear();
		cin>>len;
		if(len==0)break;
		cin>>n;
		pos.pb(0);
		for(int i=1;i<=n;i++){
			cin>>tmp;
			pos.pb(tmp);
		}
		pos.pb(len);
		cout<<"The minimum cutting is "<<dp(0,n+1)<<".\n";
	}	
}
