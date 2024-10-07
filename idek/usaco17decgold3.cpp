#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll flavor[100005],spicy[100005];
ll n,miniF;
ll solve(){
	ll idx=1,minSpicy=1e9;
	while(idx<=n){
		ll currFlavor=0,currMax=0;
		while(currFlavor<miniF&&idx<=n){
			currFlavor+=flavor[idx];
			currMax=max(currMax,spicy[idx]);
			idx++;
		}
		if(currFlavor<miniF)return minSpicy;
		minSpicy=min(minSpicy,currMax);
	}
	return minSpicy;
}
int main(){
	cin>>n>>miniF;
	for(int i=1;i<=n;i++)cin>>flavor[i]>>spicy[i];
	cout<<1e9<<endl;
	cout<<solve()<<endl;
	
}
