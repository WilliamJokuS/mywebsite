#include <bits/stdc++.h>
using namespace std;
int q,x,y,tmbh=0;
bool rev=false;
int main(){
	deque<int> a;
	string s;
	cin>>q;
	while(q--){
		cin>>s;
		if(s=="adx"){
			cin>>x;
			tmbh+=x;
		}else if(s=="dex"){
			cin>>x;
			tmbh-=x;
		}else if(s=="add"){
			cin>>x>>y;
			for(int i=1;i<=y;i++){
				a.push_back(x-tmbh);
			}
			cout<<a.size()<<"\n";
		}else if(s=="del"){
			cin>>y;
			cout<<a.back()+tmbh<<"\n";
			for(int i=1;i<=y;i++){
				a.pop_back();
			}
		}
	}
}
