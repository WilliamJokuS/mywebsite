#include <bits/stdc++.h>
using namespace std;
int t,x,y,first,last;
int main(){
	int size=0;
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	deque <int> dq;
	cin>>t;
	while(t--){
		cin>>s;
		if(s=="add"){
			cin>>x>>y;
			size+=y;
			for(int i=1;i<=y;i++)dq.push_back(x);
			cout<<size<<endl;
		}else if(s=="del"){
			cin>>y;
			size-=y;
			cout<<dq.at(0)<<endl;
			for(int i=1;i<=y;i++)dq.pop_front();
		}else{
			first=0,last=size;
			while((first!=last)&&(first!=--last)){
    			swap(dq.at(first),dq.at(last));
    			++first;
  			}
		}
	}

}
