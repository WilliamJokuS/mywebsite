#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	queue <int> q; 
	while(t>0){
		int choice,n;
		cin>>choice;
		if(choice==1){
			cin>>n;
			q.push(n);
		}else if(choice==2){
			if(q.size()>0)q.pop();
		}
		else{
			if(q.empty()==true)cout<<"Empty!\n";
			else cout<<q.front()<<"\n";
		}
		t--;
	}
}
