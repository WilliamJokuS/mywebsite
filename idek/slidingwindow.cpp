#include <iostream>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=0;
	int kiri=1;
	for(int i=1;i<=m;i++){
		sum+=a[i];
	}
	cout<<sum<<endl;
	for(int i=m+1;i<=n;i++){
		sum+=a[i];
		sum-=a[kiri];
		kiri++;
		cout<<sum<<endl;
	}
}
