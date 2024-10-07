#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[25];
int n;
ll rec(int idx,ll g1, ll g2){
	if(idx>n)return abs(g1-g2);
	ll take=rec(idx+1,g1+a[idx],g2);
	ll skip=rec(idx+1,g1,g2+a[idx]);
	return min(take,skip);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cout<<rec(1,0,0)<<endl;
}

