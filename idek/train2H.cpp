#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,tmp,tmp2,fi;
priority_queue<ll> st;
int main(){
	while(true){
		ll ans=0;
		cin>>n;
		if(!n)break;
		for(int i=1;i<=n;i++){
			cin>>tmp;
			st.push(tmp*-1);
		}
		while(!st.empty()){
			tmp=st.top()*-1;
			st.pop();
			if(st.empty())break;
			tmp2=st.top()*-1;
			st.pop();
			ans+=tmp2+tmp;
			st.push((tmp2+tmp)*-1);
		}
		cout<<ans<<endl;
	}
}
