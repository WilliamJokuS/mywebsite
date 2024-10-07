#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
	int n,t,tmp;
	cin>>t;
	while(t--){
		bool salah=false;
		ll sum=0,pos=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>tmp;
			if(tmp>100){
				salah=true;
			}
			if(tmp>0)pos++;
			sum+=tmp;
		}
		if(salah)cout<<"NO\n";
		else if(sum>=100&&sum-100<pos)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
