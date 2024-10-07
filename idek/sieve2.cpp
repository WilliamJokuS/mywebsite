#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll arr[1000000];
int main(){ 
	ll t,k;
	ll n=1;
	ll prima[77800];
	cin>>t;
	
	for (ll i = 2; i < 999000; i++) {
      for (ll j = i * i; j < 999000; j+=i) {
         arr[j - 1] = 1;
      }
    }
	for (ll i = 2; i <999000; i++) {
	    if (arr[i - 1] == 0){
	        prima[n]=i;
			n++;
			if(n==77780)break;
		}
	}
	   
	for(ll j=1;j<=t;j++){
		cin>>k;
		cout<<prima[k]<<endl;
	}
	return 0;
}
