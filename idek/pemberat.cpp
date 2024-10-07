#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[100];
ll pangkat(int x){
	if(x==1)return 2;
	if(x==0)return 1;
	else if(memo[x]!=-1)return memo[x];
	else if(x%2==0){
		memo[x]=pangkat(x/2)*pangkat(x/2);
	}else{
		memo[x]=pangkat(x/2)*pangkat(x/2)*2;
	}
	return memo[x];
}
ll biner[70];
int main(){
	memset(biner,0,sizeof biner);
	memset(memo,-1,sizeof memo);
	ll b,k,berat;
	int x=1;
	cin>>b>>k;
	berat=k-b;
	while(berat>0){
		biner[x]=berat%2;
		berat=berat/2;
		x++;
	}
	for(int i=x;i>=1;i--){
		if(i==x&&biner[i]==0)continue;
		if(biner[i]==0)continue;
		cout<<pangkat(i-1)<<endl;
	}
}
