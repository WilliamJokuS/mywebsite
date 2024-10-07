#include <bits/stdc++.h>
using namespace std;
int coin[5]={1,5,10,25,50};
int memo[7500];
int nCara(int n){
	if(n<0)return 0;
	if(n<5)return 1;
	else if(memo[n]==-0){
		for(int i=0;i<=4;i++){
			memo[n]+=nCara(coin[i])*nCara(n-coin[i]);
		}
		return memo[n];
	}
	else return memo[n];
	
}
int main(){
	int n;
	memset(memo,0,sizeof memo);
	while(cin>>n){
		cout<<nCara(n)<<"\n";
	}
}
