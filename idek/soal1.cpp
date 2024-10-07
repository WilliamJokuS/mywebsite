#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	int h,m;
	cin>>t;
	for(int i=1;i<=t;i++){
		cin>>h>>m;
		cout<<(24-h)*60-m<<endl;
	}
}
