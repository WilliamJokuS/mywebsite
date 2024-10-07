#include <bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0,n;
	string s;
	cin>>s;
	n=(s.size()+1)/2;
	for(int i=0;i<n;i++){
		if(s[i]!=s[s.size()-1-i])cnt++;
	}
	if(cnt>1)cout<<"NO\n";
	else if(cnt==0&&s.size()%2==0)cout<<"NO\n";
	else cout<<"YES\n";
}
