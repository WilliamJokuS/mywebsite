#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int q, n;
int   a[100005];
ll pref[100005];
ll pref2[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pref[i]=pref[i-1]+a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)pref2[i]=pref2[i-1]+a[i];
	cin>>q;
	int tc,l,r;
	while(q--){
		cin>>tc>>l>>r;
		if(tc==1)cout<<pref[r]-pref[l-1];
		else cout<<pref2[r]-pref2[l-1];
		cout<<endl;
	}
}
