#include <bits/stdc++.h>
using namespace std;
char perm[10];
bool used[10];
void p(string s,int idx){
	if(idx==s.size()){
		for(int i=0;i<s.size();i++){
			cout<<char(perm[i]);
		}
		cout<<endl;
		return;
	}else{
		for(int i=0;i<s.size();i++){
			if(used[i])continue;
			used[i]=true;
			perm[idx]=s[i];
			p(s,idx+1);
			used[i]=false;
		}
	}
}
int main(){
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	p(s,0);
}
