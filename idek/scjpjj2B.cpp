#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int a[20]={2,3,5,7,11, 13,17,19,23,29, 31,37,41,43,47, 53,4,9,25,49};
	int cnt=0;
	string s;
	for(int i=0;i<20;i++){
		cout<<a[i]<<endl;
		cin>>s;
		if(s=="yes")cnt++;
	}
	if(cnt>1)cout<<"composite"<<endl;
	else cout<<"prime"<<endl;
}
