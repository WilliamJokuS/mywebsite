#include <bits/stdc++.h>
using namespace std;
void pola1(int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
void pola2(int n){
	for(int i=n;i>=1;i--){
		for(int j=n;j>=i;j--){
			cout<<j;
		}
		cout<<endl;
	}
}
void pola3(int n){
	for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			cout<<j;
		}
		cout<<endl;
	}
}
void pola4(int n){
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
