#include <bits/stdc++.h>
using namespace std;
int n,tmp,tot=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		tot+=tmp%2;
	}
	for(int i=1;i<=n;i++){
		cin>>tmp;
	}
	if(tot%2==0)cout<<0<<endl;
	else cout<<1<<endl;
}
