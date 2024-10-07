#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
int a[100005];
int b[100005];
ll ans=0,tmp;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int k=1;k<=1000;k++){
		tmp=0;
		for(int i=1;i<=n;i++){
			tmp+=(k+a[i])%m*b[i];
		}
		ans=max(ans,tmp);
	}
	cout<<ans<<endl;
}
