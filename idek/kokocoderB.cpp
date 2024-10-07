#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt,n,x;
ll spf[2000005];
int main(){
	for(int i=2;i*i<=2e6;i++){
		for(int j=i;j<=2e6;j+=i){
			if(spf[j]==0)spf[j]=i;
		}
	}
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>x;
		while(x>1){
			x/=spf[x];
			cnt++;
		}
	}
	cout<<cnt<<endl;
}
