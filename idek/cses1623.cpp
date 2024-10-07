#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[25];
int main(){
	int n;
	ll sum1=0,sum2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(int i=n;i>=1;i--){
		if(sum1>sum2)sum2+=a[i];
		else sum1+=a[i];
	}
	cout<<abs(sum2-sum1)<<endl;
}
