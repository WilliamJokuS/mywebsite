#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
ll p,q,r,t,x;
ll fpb(ll a,ll b){
	if(b==0)return a;
	else return fpb(b,a%b);
}
ll kpk(ll a,ll b){
	return a*b/fpb(a,b);
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>p>>q>>r;
    ll fak=kpk(kpk(p,q),r);
    cin>>t;
    cout<<fak<<endl;
    while(t--){
    	cin>>x;
    	if(x%fak==0)cout<<"YA\n";
    	else cout<<"TIDAK\n";
	}
}


