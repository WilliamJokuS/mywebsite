#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,tmp;
ll maks=0,mini=2e9;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		maks=max(maks,tmp);
		mini=min(mini,tmp);	
	}
	cout<<(maks-mini+1)/2<<endl;
}                     
