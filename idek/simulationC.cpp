#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
	ll t,a,m,tmp;
	cin>>t;
	priority_queue <ll> ans;
	while(t--){
		cin>>a>>m;
		for(ll i=1;i*i<=m;i++){
			if(m%i==0){
				tmp=m/i-1;
				if(tmp%a==0)ans.push(-1*i*tmp/a);       //a*k=m/d -1  tmp=m/d-1 n=k*d
				tmp=i-1;
				if(tmp%a==0)ans.push(-1*m/i*tmp/a);
			}
		}
		cout<<ans.size()-1<<endl;
		while(!ans.empty()){
			if(ans.top()!=0)cout<<ans.top()*-1<<" ";
			ans.pop();
		}
		cout<<endl;
	}
}
/*
m=a*n+d
m=a*k*d+d
m=d*(a*k+1)
*/
