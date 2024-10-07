#include <bits/stdc++.h>
using namespace std;
int n,t,x,y,cari;
int cnt[55];
int main(){
	cin>>t;
	while(t--){
		memset(cnt,0,sizeof cnt);
		cin>>n>>cari;
		for(int i=1;i<=n;i++){
			cin>>x>>y;
			if(x<=cari&&cari<=y){
				for(int j=x;j<=y;j++)cnt[j]++;
			}
		}
		bool ans=true;
		for(int i=1;i<=50;i++){
			if(i==cari)continue;
			if(cnt[i]==cnt[cari])ans=false;
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
   
}


