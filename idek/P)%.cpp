#include <bits/stdc++.h>
using namespace std;
int a[1005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i];
	int cnt=0;
	for(int i=1;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
}
