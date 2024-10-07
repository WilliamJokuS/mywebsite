#include <bits/stdc++.h>
using namespace std;
int t,n;
int main(){
	string s;
	deque <int> dq;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="pop_back")dq.pop_back();
		else if(s=="pop_front")dq.pop_front();
		else if(s=="push_back"){
			cin>>n;
			dq.push_back(n);
		}else{
			cin>>n;
			dq.push_front(n);
		}
	}
	while(dq.size()>0){
		cout<<dq.at(0)<<endl;
		dq.pop_front();
	}
}
