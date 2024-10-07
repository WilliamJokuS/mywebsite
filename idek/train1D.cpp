#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,sum=0,maxi=0,idx,mini=10005;
ll a[105];
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxi=max(maxi,a[i]);
		sum+=a[i];
	}
	for(int i=1;i<=m;i++){
		mini=10005;
		for(int j=1;j<=n;j++){
			if(a[j]<mini){
				mini=a[j];
				idx=j;
			}
		}
		a[idx]++;
	}
	ll k=0;
	for(int i=1;i<=n;i++){
		if(a[i]>k){
			k=a[i];
		}
	}
	cout<<k<<" "<<m+maxi<<endl;
}
//complexity : O(nm)
