#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll x;
ll ayam[105];
ll bebek[105];
ll memo[105][105];
ll dp(int idxa,int idxb){
	if(idxa>x)return 0;
	if(idxb>x)return 0;
	if(memo[idxa][idxb]!=-1)return memo[idxa][idxb];
	if(ayam[idxa]==bebek[idxb])return dp(idxa+1,idxb+1)+1;
	int gsra=dp(idxa+1,idxb);
	int gsrb=dp(idxa,idxb+1);
	memo [idxa][idxb]=max(gsra,gsrb);
	return memo[idxa][idxb];
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>x;
	for(int i=1;i<=x;i++){
		cin>>ayam[i];
	}
	for(int i=1;i<=x;i++){
		cin>>bebek[i];
	}
	cout<<dp(1,1)<<endl;
}
//2 1 3 4 5
//4 5 1 2 3





