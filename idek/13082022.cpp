#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cek(ll a){
	for(int i=2;i*i<=a;i++){
		if(a%i==0)return false;
	}
	return true;
}
ll x,n;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	while(n--){
		cin>>x;
		ll tmp=sqrt(x);
		if(tmp*tmp==x&&cek(tmp)&&x!=1){
			cout<<"YES\n";
		}else cout<<"NO\n";
	}
}
