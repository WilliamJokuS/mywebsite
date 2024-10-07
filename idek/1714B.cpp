#include <bits/stdc++.h>
using namespace std;
int t,n;
int a[200005];
bool ada[200005];
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=n;i>=1;i--){
			if(ada[a[i]]){
				cout<<i<<endl;
				break;
			}
			if(i==1)cout<<0<<endl;
			else ada[a[i]]=true;
		}
		memset(ada,false,sizeof ada);
	}
}
