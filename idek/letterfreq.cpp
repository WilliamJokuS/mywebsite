#include <bits/stdc++.h>
using namespace std;
map <char,int> mp;
int main(){
	string s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s;
		mp[s[0]]+=1;
	}
	char now='A';
	for(int i=0;i<26;i++){
		cout<<now<<": ";
		if(mp.find(now)==mp.end())cout<<0<<endl;
		else cout<<mp[now]<<endl;
		now=now+1;
	}
}
