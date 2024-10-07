#include <bits/stdc++.h>
using namespace std;
int main(){
	string s="110111110111001111";
	for(int i=0;i<s.size();i++){
		if(i%2==0)cout<<s[i];
	}
	cout<<endl;
	for(int i=0;i<s.size();i++){
		if(i%2==1)cout<<s[i];
	}
}
