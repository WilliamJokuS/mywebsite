#include <bits/stdc++.h>
using namespace std;
int main(){;
	int kar[30];
	string s;
	int beda=0,sum=0;
	cin>>s;
	memset(kar,0,sizeof kar);
	for(int i=0;i<s.size();i++){
		kar[s[i]-'a'+1]++;
	}
	sort(kar,kar+27);
	for(int i=1;i<=26;i++){
		if(kar[i]>0)beda++;
		if(i<25)sum+=kar[i];
	}
	if(beda<3)cout<<0<<"\n";
	else{
		cout<<sum<<"\n";
	}
}
