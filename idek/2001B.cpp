#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n%2==0)cout<<-1<<endl;
		else{
			int l=1,r=n;
			while(l!=r){
				cout<<r<<" "<<l<<" ";
				l++;r--;
			}
			cout<<l<<endl;
		}
	}
}
