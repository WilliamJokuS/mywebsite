#include <bits/stdc++.h>
#define pb push_back
using namespace std;
using ll = long long;
ll n,m;
int harga[1005];
int kandungan[1005];
int memo[1005][1005];
bool dosis[1005];
int knap(int idx,int uang){
	if(idx>n){
		return 0;
	}
	if(memo[idx][uang]!=-1)return memo[idx][uang];
	int lewat=knap(idx+1,uang);
	if(uang>=harga[idx]){
		int ambil=knap(idx+1,uang-harga[idx])+kandungan[idx];
		return memo[idx][uang]=max(ambil,lewat);
	}
	return memo[idx][uang]=lewat;
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>harga[i]>>kandungan[i]>>dosis[i];
	}
	cout<<knap(1,m)<<endl;
}
