#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    ll mini=max(0ll,n-m*2ll),maxi;
    ll i=1;
	while(i*(i-1ll)/2ll<m){
    	i++;
	}
	maxi=n-i;
	if(m==0)maxi=n;
	cout<<mini<<" "<<maxi<<endl;
}
