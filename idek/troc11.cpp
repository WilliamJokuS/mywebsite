#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int x=0,y=0;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='R')x+=1;
		else if(s[i]=='L')x-=1;
		else if(s[i]=='U')y+=1;
		else if(s[i]=='D')y-=1;
	}
	cout<<x<<" "<<y<<endl;
	
}
