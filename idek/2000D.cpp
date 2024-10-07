#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i=0;i<n;i++)cin>>a[i];
		string s;
		cin>>s;
		int l=0,r=n-1;
		long long ans=0;
		long long sum[n+5];
		sum[0]=a[0];
		for(int i=1;i<n;i++)sum[i]=sum[i-1]+a[i];
		while(l<r){
			while(s[l]!='L'&&l<=n)l++;
			int idxl=l;l++;
			while(s[r]!='R'&&r>=0)r--;
			int idxr=r;r--;
			if(idxl==0&&idxl<=idxr)ans+=sum[idxr];
			else if(idxl<=idxr)ans+=sum[idxr]-sum[idxl-1];
		}
		cout<<ans<<endl;
	}
}
