#include <bits/stdc++.h>
using namespace std;
int pos[2][5]={{1,2,4,8,16},{11,12,14,18,6}};
int a[200005];
int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		bool ans=true,lima=false;
		int tmp=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]%5==0){
				lima=true;
				if(a[i]%10==5)tmp=a[i];
				continue;
			}
			a[i]%=20;
		}
		if(n==1)ans=true;
		else if(lima){
			if(tmp==0){
				for(int i=1;i<n;i++){
					if(a[i]!=a[i+1])ans=false;
				}
			}else{
				for(int i=1;i<=n;i++){
					if(a[i]%5!=0)ans=false;
					if(a[i]!=tmp&&a[i]!=tmp+5)ans=false;
				}		
			}
		}
		else{
			for(int i=1;i<=n;i++){
				while(a[i]%10!=2)a[i]+=a[i]%10;
			}
			for(int i=1;i<n;i++){
				if(abs(a[i]-a[i+1])%20!=0)ans=false;
			}		
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
