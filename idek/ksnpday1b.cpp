#include <bits/stdc++.h>
using namespace std;
int main(){
	int q,n,cnt;
	cin>>q;
	while(q--){
		cin>>n;
		cnt=0;
		while(n>0){
			if(n%10==4)cnt++;
			n/=10;
		}
		cout<<cnt<<endl;
	}
}
