#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
ll n,x;
string s;
stack <char> st,st2;
int main(){
	cin>>n>>x;
	cin>>s;
	for(int i=0;i<n;i++){
		if(s[i]=='R'||s[i]=='L')st.push(s[i]);
		else if(st.size()&&st.top()!='U')st.pop();
		else st.push(s[i]);
	}
	while(st.size()){
		char top=st.top();
		st.pop();
		st2.push(top);
	}
	while(st2.size()){
		char top=st2.top();
		st2.pop();
		if(top=='R')x=x*2+1;
		else if(top=='L')x=x*2;
		else x/=2;
	}
	cout<<x<<endl;
}
