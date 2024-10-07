#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int pos[100005];
int n,cow;
bool cek(int len){
	int curr=pos[1];
	int cnt=1;
	for(int i=2;i<=n;i++){
		if(pos[i]-curr>=len){
			cnt++;
			curr=pos[i];
		}
	}
	if(cnt>=cow)return true;
	return false;
}
int binser(){
	int l=1,r=1e9,ret=0;
	while(l<=r){
		int mid=(l+r)/2;
		if(cek(mid)){
			ret=mid;
			l=mid+1;
		}else r=mid-1;
	}
	return ret;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>cow;
		for(int i=1;i<=n;i++)cin>>pos[i];
		sort(pos+1,pos+n+1);
		cout<<binser()<<endl;
	}
}
