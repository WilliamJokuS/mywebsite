#include <bits/stdc++.h>
using namespace std;
int n,k,tmp,cnt;
priority_queue<int> pq;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		pq.push(tmp*-1);
	}
	while(pq.top()*-1<k&&pq.size()>=2){
		int tmp1,tmp2;
		tmp1=-1*pq.top();
		pq.pop();
		tmp2=-1*pq.top();
		pq.pop();
		pq.push(-1*(tmp1+2*tmp2));
		cnt++;
	}
	if(pq.top()*-1<k)cout<<-1<<endl;
	else cout<<cnt<<endl;
}
