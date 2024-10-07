#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,cap;
ll memo[105][100005];
ll sz[105],val[105];
ll knap(int idx,int w){
	if(idx>n)return 0;
	if(memo[idx][w]!=-1)return memo[idx][w];
	memo[idx][w]=knap(idx+1,w);
	if(w+sz[idx]<=cap){
		memo[idx][w]=max(memo[idx][w],knap(idx+1,w+sz[idx])+val[idx]);
	}
	return memo[idx][w];
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>cap;
	for(int i=1;i<=n;i++)cin>>sz[i]>>val[i];
	cout<<knap(1,0)<<endl;
}
