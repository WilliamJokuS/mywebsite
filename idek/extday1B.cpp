#include <bits/stdc++.h>
using namespace std;
int n,s;
int INF=1e8;
int memo[2005][2005];
int w[2005],v[2005];
int knap(int idx,int cap){
	if(cap<0)return -INF;
	if(cap==0||idx>n)return 0;
	if(memo[idx][cap]!=-1)return memo[idx][cap];
	return memo [idx][cap]= max(
	knap(idx+1,cap-w[idx])+v[idx],
	knap(idx+1,cap)
	);
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>s>>n;
	for(int i=1;i<=n;i++){
		cin>>w[i]>>v[i];
	}
	cout<<knap(1,s)<<endl;
}
