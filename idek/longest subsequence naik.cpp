#include <bits/stdc++.h>
using namespace std;
string s;
int a[100005];
int main(){
	int n;
	cin>>s;
	n=s.size();
	for(int i=0;i<n;i++){
		s[i]=a[i];
	}
	int dp[n+2];
	int maxdp=0;;
	int a[n+2];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=1;
		for(int j=1;j<i;j++){
			if(a[j]<a[i])dp[i]=max(dp[i],dp[j]+1);
		}
		if(maxdp<dp[i])maxdp=dp[i];
	}
	cout<<maxdp<<endl;
}
