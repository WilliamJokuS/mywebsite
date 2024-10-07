#include <bits/stdc++.h>
using namespace std;
int n,x,tc;
int main(){
	queue<int> q;
	priority_queue<int> pq;
	cin>>n;
	while(n--){
		cin>>tc;
		if(tc==1){
			cin>>x;
			q.push(x);
		}else if(tc==2){
			if(pq.size()){
				cout<<pq.top()*-1<<endl;
				pq.pop();
			}else{
				cout<<q.front()<<endl;
				q.pop();
			}	
		}
		else{
			while(q.size()){
				pq.push(q.front()*-1);
				q.pop();
			}
		}
	}
}
