#include <bits/stdc++.h>
using namespace std;
int keep[20];
void rec(int idx){
	if(idx>5){
		if(keep[1]+keep[2]!=5)return;
		if(keep[1]+keep[3]+keep[4]!=9)return;
		if(keep[2]+keep[4]+keep[5]!=13)return;
		for(int i=1;i<=5;i++){
			cout<<keep[i]<<" ";
		}
		cout<<endl;
	}else{
		for(int i=1;i<=13;i++){
			keep[idx]=i;
			
			rec(idx+1);
		}

	}
}
int main(){
//	rec(1);
//int dp[20];
//int ans=0;
//	vector<int> a;
//	a.push_back(0);
//	while(true){
//		int x;
//		cin>>x;
//		if(x==0)break;
//		a.push_back(x);
//	}
//	int n=a.size()-1;
//	for(int i=1;i<=n;i++){
//		dp[i]=1;
//		for(int j=1;j<i;j++){
//			if(a[j]<a[i])dp[i]=max(dp[i],dp[j]+1);
//		}
//		ans=max(ans,dp[i]);
//	}
//	cout<<ans<<endl;
long long x=2020,ans=0,cnt=0;
cout<<1ll*1024*1024*512<<endl;
	while(x>0){
		ans+=(x%2)*pow(4,cnt);
		x/=2;
		cnt++;
	}
	cout<<ans%31<<endl;
}
