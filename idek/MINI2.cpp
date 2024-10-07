#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string tmp;
	int a[30],b[30];
	while(t>0){
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		int l=0;
		t--;
		cin>>tmp;
		for(int i=0;i<tmp.size();i++){
			a[tmp[i]-'a']++;
		}
		cin>>tmp;
		for(int i=0;i<tmp.size();i++){
			b[tmp[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			l+=min(a[i],b[i]);
		}
		cout<<l<<endl;
	}
}
