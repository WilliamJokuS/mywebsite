#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,x,zero;
int main(){
	priority_queue<ll> pq_max;
	priority_queue<ll,vector<ll>,greater <ll> > pq_min;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		pq_max.push(x);
		pq_min.push(x);
	}
	cin>>zero;
	while(pq_max.size()>1){
		ll x=pq_max.top();
		pq_max.pop();
		ll y=pq_max.top();
		pq_max.pop();
		pq_max.push(x*y+1);
	}
	while(pq_min.size()>1){
		ll x=pq_min.top();
		pq_min.pop();
		ll y=pq_min.top();
		pq_min.pop();
		pq_min.push(x*y+1);
	}
	cout<<pq_min.top()-pq_max.top()<<endl;
}
