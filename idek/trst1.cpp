#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			if(i%2==0)cout<<'-';
			else cout<<'*';
		}
		cout<<endl;
	}
	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			if(i%2==0)cout<<'-';
			else cout<<'*';
		}
		cout<<endl;
	}
}
