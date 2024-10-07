#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
	int t,k,n;
	cin>>t;
	while(t--){
		long long sum2=0,sum1=0;
		cin>>n>>k;
		k=min(n-k,k);
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a+1,a+n+1);
		for(int i=1;i<=k;i++){
			sum1+=a[i];
		}
		for(int i=k+1;i<=n;i++){
			sum2+=a[i];
		}
		cout<<sum2-sum1<<endl;
	}
}
