#include <bits/stdc++.h>
using namespace std;
int n;
int d[10005][10005];
int memo[10005][10005];
int jawab(int mask,int id){
	if(__builtin_popcount(mask)==n){
		return d[id][0];
	}
	if(memo[mask][id]!=1){
		return memo[mask][id];
	}
	memo[mask][id]=INT_MAX;
	for(int i=1;i<=n;i++){
		if((int)(mask&(1<<(i-1)))==0){
			memo[mask][id]=min(memo[mask][id],jawab(mask|(1<<(i-1)),i)+d[id][i]);
		}
	}
	return memo[mask][id];
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=i;i<=n;j++){
			d[i][j]=(i+j)%(n+1);
		}
	}
	cout<<jawab(0,0)<<endl;
}
