#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll h[200005],sum[1005];
ll q,k,n;
pair<int,int> mnim[200005];
bool sub3=true;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>h[i];
		sum[i]=sum[i-1]+h[i];
		if(h[i]!=h[1])sub3=false;
		mnim[i].first=h[i];
		mnim[i].second=i;
	}
	sort(mnim+1,mnim+n+1);
	cin>>q;
	for(int i=1;i<=q;i++){
		cin>>k;
		if(k%n==0)cout<<n;
		else cout<<k%n;
		cout<<"\n";
	}
}
