#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s.size()<3)cout<<"NO\n";
		else if(s[0]!='1'||s[1]!='0')cout<<"NO\n";
		else if(s[2]=='0')cout<<"NO\n";
		else if(s.size()==3&&s[2]=='1')cout<<"NO\n";
		else cout<<"YES\n";
	}
}
