#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll yes[105];
int main(){
	ll n,idx=0,cnt=0;
	cin>>n;
	while(n){
		yes[idx]+=n%3;
		if(n%3)cnt+=n%3;
		n/=3;
		idx++;
	}
	cout<<cnt<<endl;
	for(int i=0;i<idx;i++){
		if(yes[i]){
			for(int j=1;j<=yes[i];j++){
				cout<<ll(pow(3,i))<<" ";
			}
		}
	}
	cout<<endl;
}
