#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005];
ll n,m;
int main(){
	cin>>n>>m;
	ll max,sum=0;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)sum+=a[i];
	max=sum;
	for(int i=m+1;i<=n;i++){
		sum+=a[i]-a[i-m];
		if(sum>max)max=sum;
	}
	cout<<max<<endl;
}
