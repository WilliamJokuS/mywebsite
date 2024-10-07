#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll q,l,r;
	cin>>q;
	while(q--){
		cin>>l>>r;
		l=sqrt(l);
		if(l==1)l++;
		r=sqrt(r);
		if(r==1)r++;
		cout<<r-l+1;
		if(q>0)cout<<" ";
		else cout<<endl;
	}
}
