#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool memo[1005][1005];
int a[1005];
int main(){
	ll n,m;
	cin>>n>>m;
	if(n>m){
		cout<<"YES\n";
		return 0;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]%=m;
		memo[i][a[i]]=true;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<m;j++){
			if(memo[i][j]==true)continue;
			if(memo[i-1][j])memo[i][j]=memo[i-1][j];
			else memo[i][j]=memo[i-1][(j-a[i]+m)%m];
        }
	}
	if(memo[n][0]==true)cout<<"YES\n";
	else cout<<"NO\n";
}
