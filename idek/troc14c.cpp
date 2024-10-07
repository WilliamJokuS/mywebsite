#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int tmp;
		cin>>tmp;
	}
    if(n==1)cout<<0<<endl;
	else{
		cout<<101<<endl;
		for(int i=1;i<=101;i++){
			if(i%2==1)cout<<'G';
			else cout<<'L';
		}
		cout<<endl;
	}
}
