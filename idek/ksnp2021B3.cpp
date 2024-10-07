#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,uang;
int memo[1005][10005];
int harga[1005];
int kandungan[1005];
int dosis[1005];
int knap(int idx,int sisa){
	if(memo[idx][sisa]!=-1)return memo[idx][sisa];
	if(idx==0)return memo[idx][sisa]=0;
	int ambil,lewat;
	lewat=knap(idx-1,sisa);
	if(sisa<harga[idx])return memo[idx][sisa]=lewat;
	if(dosis[idx])ambil=kandungan[idx]+knap(idx-1,sisa-harga[idx]);
	else ambil=kandungan[idx]+knap(idx,sisa-harga[idx]);
	return memo[idx][sisa]=max(ambil,lewat);
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>uang;
    for(int i=1;i<=n;i++){
    	cin>>harga[i]>>kandungan[i]>>dosis[i];
	}
	cout<<knap(n,uang)<<endl;
}
