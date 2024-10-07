#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	string s;
	cin>>n>>s;
	int a[n+3];
	for(int i=0;i<n;i++){
		a[i]=s[i]-'a';
	}
	char now,tmp;
	
	for(int i=0;i<n;i++){
		tmp=char(a[i]+97);
		if(i==0)cout<<tmp;
		else if(tmp!=now)cout<<tmp;
		now=tmp;
	}
	cout<<endl;
}
