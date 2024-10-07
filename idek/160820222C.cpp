#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll l,r;
ll gcd(ll a,ll b){
	if(b==0)return a;
	else return gcd(b,a%b);
}
int main(){
	cin>>l>>r;
	for(ll i=l;i<=r-2;i++){
		for(ll j=i+1;j<=r-1;j++){
			for(ll k=j+1;k<=r;k++){
				if(gcd(i,j)==1&&gcd(j,k)==1&&gcd(i,k)!=1){
					cout<<i<<" "<<j<<" "<<k<<endl;
					return 0;
				}
			}
		}
	}
	cout<<-1<<endl;
}
