#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int a[100005],x[100005],y[100005],degree[100005];
int main(){
	cin>>t;
	while(t--){
		memset(degree,0,sizeof degree);
		int ans=1e9;
		cin>>n>>m;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=m;i++){
			cin>>x[i]>>y[i];
			degree[x[i]]++;
			degree[y[i]]++;
		}
		if(m%2==0)cout<<0<<endl;
		else{
			for(int i=1;i<=n;i++){
				if(degree[i]%2==1)ans=min(ans,a[i]);
			}
			for(int i=1;i<=m;i++){
				if(degree[x[i]]%2==0&&degree[y[i]]%2==0)ans=min(ans,a[x[i]]+a[y[i]]);
			}
			cout<<ans<<endl;
		}
	}
}
