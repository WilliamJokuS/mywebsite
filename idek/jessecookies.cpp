#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	priority_queue<int>pq;
	int n,k,tmp;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		pq.push(-tmp);
	}
	int step=0;
	while(pq.size()>1){
		if(-pq.top()>=k)break;
		int min1=-pq.top();
		pq.pop();
		int min2=-pq.top();
		pq.pop();
		int campur=min1+2*min2;
		pq.push(-campur);
		step++;
	}
	if(-pq.top()<k)cout<<"-1\n";
	else cout<<step<<"\n";
}
