#include <bits/stdc++.h>
using namespace std;
int a[200005];
int t;
int main(){
	cin>>t;;
	while(t--){
		bool now;
		int n,ans=1;
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		if(a[1]>0)now=true;
		for(int i=2;i<=n;i++){
			if(now&&a[i]<0){
				ans++;
				now^=1;
			}else if(!now&&a[i]>0){
				ans++;
				now^=1;
			}
		}
		cout<<ans<<endl;
	}

}
