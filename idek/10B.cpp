#include <bits/stdc++.h>
#define pb push
using namespace std;

int main(){
	priority_queue<int> pq;
	int q,cs,tmp;
	cin>>q;
	while(q--){
		cin>>cs;
		if(cs==1){
			cin>>tmp;
			pq.pb(tmp);
		}else if(cs==2)cout<<pq.top()<<"\n";
		else pq.pop();
	}
}
