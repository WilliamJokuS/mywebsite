#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,k,n=0;
		cin>>x>>k;
		int tmp=x;
		for(int i=2;i<=x;i++){
			if(tmp==1)break;
			while(tmp%i==0){
				n++;
				tmp=tmp/i;
			}
		}
		if(n>=k)cout<<1<<"\n";
		else cout<<0<<"\n";
	}
}
