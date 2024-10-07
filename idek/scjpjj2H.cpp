#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[50005],n,tmp;
ll pref[50005];
ll knapsack()
int main(){
	while(true){
		memset(pref,0,sizeof pref);
		memset(a,0,sizeof a);
		cin>>n;
		if(n==0)break;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		pref[1]=a[1];
		for(int i=1;i<=n;i++){
			pref[i]=pref[i-1]+a[i];
		}
		ll jwb=0;
		for(int i=2;i<=n;i++){
			jwb+=pref[i];
		}
		cout<<jwb<<endl;
	}
}
