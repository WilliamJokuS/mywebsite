#include <bits/stdc++.h>
using namespace std;

stack <int> st;


int main(){
	string s;
	int ans=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(')st.push(0);
		else if(st.empty()){
			ans++;
			st.push(0);
		}else st.pop();
	}
	ans+=st.size()/2;
	cout<<ans<<endl;
}


