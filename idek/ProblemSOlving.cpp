#include <bits/stdc++.h>
using namespace std;
string s1,s2;
int h1[30],h2[30];
//string hapusi(string s,int idx){
//	string ret;
//	for(int i=0;i<s.size();i++){
//		if(i!=idx)ret+=s[i];
//	}
//	return ret;
//}
string hapusc(string s,char c){
	string ret;
	bool udh=false;
	for(int i=0;i<s.size();i++){
		if(s[i]==c&&!udh)udh=true;
		else ret+=s[i];
	}
	return ret;
}
int main(){
	int ans=0;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<s1.size();i++){
		h1[s1[i]-'a']++;
	}
	for(int i=0;i<s2.size();i++){
		h2[s2[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		ans+=abs(h1[i]-h2[i]);
		char c='a'+i;
		if(h1[i]>h2[i]){
			cout<<c<<endl;
			hapusc(s1,c);
		}
	}
	int idx=0,cnt=0;
	for(int i=0;i<s2.size();i++){
		while(s2[i]!=s1[idx]){
			idx++;
		}
		cnt++;
	}
	ans+=s1.size()-cnt;
	cout<<ans<<endl;
}
