#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,tMax;
ll cows[10005];
bool test(int size){
	ll idx=1;
	priority_queue<ll> pq;
	for(idx=1;idx<=size;idx++)pq.push(cows[idx]);//put first kn
//	cout<<idx<<endl;
	while(idx<=n){
		ll add=pq.top()+cows[idx];
		//cout<<size<<": "<<add<<endl;
		if(add*-1>tMax)return false;
		idx++;
		pq.pop();
		pq.push(add);		
	}
	ll comp;
	while(pq.size()){
		comp=pq.top();
		pq.pop();
	}
//	cout<<comp<<endl;
	if(comp*-1<=tMax)return true;
	else return false;
}
int main(){
	cin>>n>>tMax;
	for(ll i=1;i<=n;i++){
		cin>>cows[i];
		cows[i]*=-1;
	}	
	ll l=1,r=n;
	ll ans=n;
	while(l<=r){
		ll mid=(l+r)/2;
		if(test(mid)){
			ans=mid;
			r=mid-1;
		}else{
			l=mid+1;
		} 
	}
	
	cout<<ans<<endl;
}
