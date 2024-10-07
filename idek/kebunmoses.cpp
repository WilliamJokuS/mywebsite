#include <bits/stdc++.h>
using namespace std;
int a[100005];
int b[1005];
int n,x,y;
int main(){
	cin>>n;
	for(int i=1;i<=2*n;i++){
		cin>>a[i];		
	}
	for(int i=1;i<=2*n;i++){
		cout<<a[i]<<" ";
	}
	cout<<x<<" "<<2*y<<"\n";
	return 1;
}
