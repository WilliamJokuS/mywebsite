#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool denah[205][205];
ll pref[205][205];
ll total(ll x1,ll y1,ll x2,ll y2){
	return pref[x2][y2]-pref[x1-1][y2]-pref[x2][y1-1]+pref[x1-1][y1-1];
}
bool cek(ll x1,ll y1,ll x2,ll y2){
	if(total(x1,y1,x2,y2)==(x2-x1+1)*(y2-y1+1))return true;
	else return false;
}
int main(){
	ll t,baris,kolom,n,luas,b1,k1,b2,k2;
	cin>>t;
	for(ll i=1;i<=t;i++){
		memset(denah,0, sizeof denah);
		memset(pref,0,sizeof pref);
		cin>>baris>>kolom>>n>>luas;
		for(ll j=1;j<=n;j++){
			cin>>b1>>k1>>b2>>k2;
			for(ll b=b1;b<=b2;b++){
				for(ll k=k1;k<=k2;k++){
					denah[b][k]=true;
				}
			}
		}
		for(ll x=1;x<=baris;x++){
			for(ll y=1;y<=kolom;y++){
				pref[x][y]=pref[x-1][y]+pref[x][y-1]-pref[x-1][y-1]+(denah[x][y]^1);
			}
		}
		ll tmp;
		ll ans = 0;
		for(ll x1=1;x1<=baris;x1++){
			for(ll y1=1;y1<=kolom;y1++){
				for(ll x2=x1;x2<=baris;x2++){
					ll l = y1;
					ll r = kolom;
					while(l<=r){
						ll mid = (l+r)/2;
						if(cek(x1,y1,x2,mid)){
							ans = max(ans,total(x1,y1,x2,mid));
							l = mid+1;
						}else r=mid-1;
					}	
				}
			}
		}
		if(ans>=luas)cout<<"YA\n";
		else cout<<"TIDAK\n";
	}
}
