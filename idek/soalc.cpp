#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ksh[200005];
ll dpt[200005];
ll xksh[200005];
ll xdpt[200005];
int main(){
	ll n;
	ll x;
	ll lone=0;
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>x;
		ksh[i]=x;
		if(x==0){
			lone++;
			continue;
		}
		dpt[x]=i;
	}
	ll idx=1;
	for(ll i=1;i<=n;i++){
		if(ksh[i]==0){
			xksh[i]=i;
			a++;
		}
	}
	for(ll i=1;i<=n;i++){
		if(dpt[i]==0){
			xdpt[i]=i;
		}
	}
	ll sama=0;
	ll same[200005];
	for(ll i=1;i<=a;i++){
		if(xksh[i]==xdpt[i]){
			same[i]=xksh[i];
			sama++;	
		}
	}
	if(sama%2==1){
		
	}
}
5
5 0 0 2 4

0 2 3 0 0

1 0 3 0 0
3 0 1 0 0

5
2 1 0 0 0

0 0 3 4 5

0 0 3 4 5
0 0 5 3 4

7
7 0 0 1 4 0 6

0 2 3 0 0 6 0

0 2 3 0 5 0 0

