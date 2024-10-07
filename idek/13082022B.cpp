#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int fact[3005];
ll ans=1,n;
ll mod=1e9+7;
void count(int a){
	for(int i=2;i<=a;i++){
		while(a%i==0){
			fact[i]++;
			a/=i;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n;
	for(int i=1;i<=n;i++){
		count(i);
	}
	for(int i=1;i<=n;i++){
		ans*=fact[i]+1;
		ans%=mod;
	}
	cout<<ans<<endl;
}
