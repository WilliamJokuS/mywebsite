#include <bits/stdc++.h>
using namespace std;
long long sum=0;
int main(){
	int n;
	cin>>n;
	long long a[n+5],b[n+5];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(int i=0;i<n;i++){
		sum+=a[i]*b[n-i-1];
	}
	cout<<sum<<endl;
}
