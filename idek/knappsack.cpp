#include <bits/stdc++.h>
using namespace std;
long long berat[105];
long long harga[105];
long long memo [105][2005];
long long n,k;
bool ans[105];
long long inf=200000005;
long long knapsack(long long idx,long long tas){
	long long lewat,ambil;
	if(idx>k){
		if(tas<0)return -inf;
		else return 0;
	}
	if(tas==0)return 0;
	if(tas<0)return -inf;
	if(memo[idx][tas]!=-1)return memo[idx][tas];
	lewat=knapsack(idx+1,tas);
	ambil=harga[idx]+knapsack(idx+1,tas-berat[idx]);
	if(ambil>lewat){
		memo[idx][tas]=ambil;
	}else{
		memo[idx][tas]=lewat;
	}
	return memo[idx][tas];
}

void backtrack(long long idx, long long tas){
	if(idx==k){
		if(tas<berat[idx]) ans[idx] = false;
		else ans[idx] = true;
		return;
	}
	if(tas<0) return;
	if(tas<berat[idx]){
		ans[idx] = false;
		backtrack(idx+1,tas);
	} else if(memo[idx][tas] == harga[idx]+memo[idx+1][tas-berat[idx]]){
		ans[idx] = true;
		backtrack(idx+1,tas-berat[idx]);
	} else{
		ans[idx] = false;
		backtrack(idx+1,tas);
	}
}

int main(){
	memset(memo,-1, sizeof memo);
	memset(ans,0, sizeof ans);
	cin>>n>>k;
	for(long long i=1;i<=k;i++){
		cin>>berat[i]>>harga[i];
	}
	long long tmp = knapsack(1,n);
//	cout << tmp << endl;
	backtrack(1,n);
	for(int i=1;i<=k;i++) if(ans[i]) cout << i << endl;
	
}
