#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fact[3005];
ll ans=1,n;
int main(){
	cin>>n;
	for(ll i=2;i*i<=n;i++){
		ll cnt=0;
		while(n%i==0){
			cnt++;
			n/=i;
		}
		ans*=cnt+1;
	}
	if(n>1)ans*=2;
	cout<<ans<<endl;
}
