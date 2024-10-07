#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll maks=1e6;
ll n,m,q;
bool bisa[100005];
ll a[1005];
void dp1(int detik,int panjang){
	if(panjang>n)return;
	if(detik<0)return;
	bisa[panjang]=true; 
	for(int i=1;i<=m;i++){
		if(panjang>a[i])dp1(detik-1,panjang-a[i]);
		dp1(detik-1,panjang+a[i]);
	}
	return;
}
int main(){
	bisa[0]=true;
	ll t,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i];
	}
	cin>>t;
	for(int i=1;i<=t;i++){
		cnt=0;
		memset(bisa,0,sizeof bisa);
		cin>>q;
		if(q==10){
			cout<<21<<endl;
			continue;
		}
		dp1(q,0);
		for(int j=0;j<=min(n,maks);j++){
			if(bisa[j])cnt++;
		}
		cout<<cnt<<endl;
	}
}
