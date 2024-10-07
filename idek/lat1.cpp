#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string n;
	cin>>n;
	bool ss=false;
	for(int i=0;i<n.size();i++){
		if(ss)cout<<9;
		else if(n[i]>n[i+1]){
			ss=true;
			cout<<n[i]-'1';
			continue;
		}
		else cout<<n[i];
	}
	cout<<endl;
}
