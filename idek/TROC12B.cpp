#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll memo[30];
ll pang2(int n){
	if(n==0)return 1;
	if(n==1)return 2;
	if(memo[n]==0&&n%2==0){
		memo[n]=pang2(n/2)*pang2(n/2);
	}
	else if(memo[n]==0&&n%2==1){
		memo[n]=pang2(n/2)*pang2(n/2)*2;
	}
	return memo[n];
}
int main(){
	int n;
	cin>>n;
	ll a[33];
	ll tot=0;
	for(int i=0;i<=n;i++){
		cin>>a[i];
		tot+=a[i]*pang2(i);
	}
	if(tot%pang2(n)==0){
		cout<<tot/pang2(n)<<endl;
	}else{
		cout<<"-1"<<endl;
	}
}

