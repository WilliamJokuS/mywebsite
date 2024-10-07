#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	stack <int> s; 
	while(t>0){
		int choice,n;
		cin>>choice;
		if(choice==1){
			cin>>n;
			s.push(n);
		}else if(choice==2){
			if(s.size()>0)s.pop();
		}
		else{
			if(s.empty()==true)cout<<"Empty!\n";
			else cout<<s.top()<<"\n";
		}
		t--;
	}
}
