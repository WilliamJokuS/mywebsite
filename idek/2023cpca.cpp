#include <bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='A')a++;
		else if(s[i]=='B')b++;
	}
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;
	if(a>b)cout<<"A wins!\n"<<endl;
	else if(a<b)cout<<"B wins!\n"<<endl;
	else cout<<"Draw!\n";
}
