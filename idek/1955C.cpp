#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	ll t,n,k;
	ll a[200005];
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1;i<=n;i++)cin>>a[i];
		ll left=1,right=n,cnt=0;
		while(k>0){
			ll weak=min(a[left],a[right]);
			if(left==right){
				if(k>=weak)cnt++;
				break;
			}
			else if(2*weak-1>k)break;
			else{
				k-=weak*2-1;
				a[left]-=weak;
				a[right]-=weak-1;
				if(a[left]==0){
					left++;
					cnt++;
				}
				if(k==0||cnt==n)break;
				a[right]--;
				k--;
				if(a[right]==0){
					right--;
					cnt++;
				}
				if(cnt==n)break;
			}
		}
		cout<<cnt<<endl;
	}
}
