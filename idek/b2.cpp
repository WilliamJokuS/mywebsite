#include <bits/stdc++.h>
using namespace std;
int lampu[30];
int main(){
	int n,a,b,c,x,max=0;
	cin>>n;
	string s;
	cin>>s;
	for(int i=0;i<n;i++){
		lampu[s[i]-'A'+1]++;
	}
	sort(lampu,lampu+27);
	for(int i=0;i<=26;i++){
		cout<<lampu[i]<<endl;
		if(lampu[i]!=0)x++;
	}
	if(x<3)cout<<-1<<"\n";
	else{
		a=lampu[24];
		b=lampu[25];
		c=lampu[26];
		max=a*3;
		if(b>a)max++;
		if(c>a)max++;
		cout<<max<<"\n";
	}
}
