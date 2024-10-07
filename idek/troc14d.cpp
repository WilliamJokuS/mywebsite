#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll sum=0;
	int n;
	cin>>n;
	int a[2*n+5];
	for(int i=0;i<2*n;i++){
		cin>>a[i];
	}
	sort(a,a+2*n);
	for(int i=2*n-1;i>=n;i--){
		sum+=a[i];
	}
	cout<<sum<<"\n";
}
