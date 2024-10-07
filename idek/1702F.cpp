#include <bits/stdc++.h>
using namespace std;
int t,n;
priority_queue<int> a,b;
bool solve(){
	while(a.size()&&b.size()){
		int x=a.top(),y=b.top();
		if(x==y){
			a.pop(),b.pop();
		}
		else if(x>y){
			return false;
		}
		else{
			b.pop();
			b.push(y/2);
		}
	}
	return true;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		int tmp;
		while(!a.empty())a.pop();
		while(!b.empty())b.pop();
		for(int i=1;i<=n;i++){
			cin>>tmp;
			while(tmp%2==0)tmp/=2;
			a.push(tmp);
		}
		for(int i=1;i<=n;i++){
			cin>>tmp;
			while(tmp%2==0)tmp/=2;
			b.push(tmp);
		}
		if(solve())cout<<"YES\n";
		else cout<<"NO\n";
	}
}
