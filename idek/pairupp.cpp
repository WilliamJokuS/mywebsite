#include <bits/stdc++.h>
#define fi first
#define se second
using namespace std;
typedef long long ll;
int n;
pair <ll,ll>  cows[100005];
bool compare(pair<ll,ll> a, pair<ll,ll> b){
	if(a.se<b.se)return true;
	else return false;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cows[i].fi>>cows[i].se;
	}
	sort(cows+1,cows+1+n,compare);
	int l=1,r=n;
	int idxL=1,idxR=1;
	ll ans=0;
	while(l<r){
		ans=max(ans,cows[l].se+cows[r].se);
		if(idxL>cows[l].fi){
			l++;
			idxL=1;
		}
		if(idxR>cows[r].fi){
			r--;
			idxR=1;
		}
		idxL++;
		idxR++;
	}
	cout<<ans<<endl;
}

