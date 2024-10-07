#include <bits/stdc++.h>
using namespace std;
stack<int> st;
stack<int> ans;
int a[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--){
		while(!st.empty()&&a[i]>=a[st.top()]){
			st.pop();			
		}
		if(st.empty())ans.push(0);
		else ans.push(st.top());
		st.push(i);
	}
	while(!ans.empty()){
		cout<<ans.top()<<endl;
		ans.pop();
	}
}

