#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,r,ans=0,sum;
int a[100005];
int main(){
	cin>>n>>r;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		ans=0;
		for(int j=1;j<=i;j++){
			sum=0;
			for(int k=j;k<=i;k++){
				sum+=a[k];
				if(sum/(k-j+1)==r&&sum%(k-j+1)==0)ans++;
			}
		}
		cout<<ans;
		if(i==n)cout<<endl;
		else cout<<" ";
	}
}
