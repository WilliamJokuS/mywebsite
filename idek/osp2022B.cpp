#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
pair <ll,ll> kandang[1005];//harga kapasitas
ll bebek[100005];
ll nkandang,nbebek;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>nkandang;
    for(int i=1;i<=nkandang;i++){
    	cin>>kandang[i].se;
	}
	for(int i=1;i<=nkandang;i++){
    	cin>>kandang[i].fi;
	}
	sort(kandang+1,kandang+nkandang+1);
	cin>>nbebek;
	for(int i=1;i<=nbebek;i++){
		cin>>bebek[i];
	}
	sort(bebek+1,bebek+1+nbebek,greater<int>());
	ll ans=0;
	ll curb=0,idx=1;
	for(int i=1;i<=nbebek;i++){
		curb++;
		ans+=bebek[i]*kandang[idx].fi;
		if(curb==kandang[idx].se){
			idx++;
			curb=0;
		}
	}
	cout<<ans<<endl;
}


