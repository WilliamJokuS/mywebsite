#include <bits/stdc++.h>
using namespace std;
stack <char> st;
string s;
char c;
void solve(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		c=s[i];
		if(c=='('||c=='{'||c=='[')st.push(c);
		else if(st.empty()==true){
			cout<<"NO\n";
			return;
		}
		else if(st.top()=='('&&c==')')st.pop();
		else if(st.top()=='{'&&c=='}')st.pop();
		else if(st.top()=='['&&c==']')st.pop();
		else{
			cout<<"NO\n";
			return;
		}
	}
	if(st.empty())cout<<"YES\n";
	else cout<<"NO\n";
	return;
}
int main(){
	int n,t;
	cin>>t;
	while(t--){
		while(!st.empty()){
			st.pop();
		}
		solve();		
	}
}
