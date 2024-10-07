#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int maks=0;
		int n,x;cin>>n;
		int cnt[105];
		memset(cnt,0,sizeof cnt);
		for(int i=1;i<=n;i++){
			cin>>x;
			cnt[x]++;
		}
		for(int i=1;i<=n;i++)maks=max(maks,cnt[i]);
		cout<<n-maks<<endl;
	}
}
