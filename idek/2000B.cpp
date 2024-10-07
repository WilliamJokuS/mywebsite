#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		bool avail[n+5];
		bool ans=true;
		for(int i=1;i<=n;i++)avail[i]=false;
		for(int i=1;i<=n;i++){
			cin>>x;
			avail[x+1]=true;
			avail[x-1]=true;
			if(i==1)continue;
			if(avail[x]==false)ans=false;
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
