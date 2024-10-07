#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int a[55];
	for(int i=0;i<55;i++){
		a[i]=0;
	}
	cin>>n;
	int x=0;
	while(n>0){
		a[x]=n%2;
		n=n/2;
		x++;
	}
	for(int i=x-1;i>=0;i--){
		cout<<a[i];
	}
	cout<<"\n";
}
