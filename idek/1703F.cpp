#include <bits/stdc++.h>
using namespace std;
int t,n,sz;
typedef long long ll;
bool idx[200005];
ll pref[200005];
void solve(){
	cin>>n;
	vector<int> pos;
	int tmp;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		if(tmp<i){
			idx[i]=true;
			pos.push_back(tmp);	
		}
	}
	for(int i=1;i<=n;i++){
		if(idx[i])pref[i]=pref[i-1]+1;
		else pref[i]=pref[i-1];
	}	
	ll ans=0;
	for(auto i: pos){
		if(i==0)continue;
		ans+=pref[i-1];
	}
	cout<<ans<<endl;
	pos.clear();
	memset(idx,false,sizeof idx);
}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
}
