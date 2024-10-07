#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s,xixi="codeforces";
	   	cin>>s;
	   	int cnt=0;
	   	for(int i=0;i<10;i++)
			if(s[i]!=xixi[i])cnt++;
		cout<<cnt<<endl;	
	}
}
