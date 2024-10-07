#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,l,r;
	cin>>n;
	l=1,r=n;
	int a1,a2;
	while(l<r){
		ll mid=(l+r)/2;
		cout<<"Q"<<" "<<l<<" "<<mid<<" "<<mid+1<<" "<<r<<endl;
		cin>>a1>>a2;
		fflush(stdout);
		if(a1==1){
			r=mid-1;
		}else if(a2==1){
			l=mid+1;
		}else if(r-l>1){
			if(l==mid)cout<<l<<endl;
			else if(r==mid+1)cout<<r<<endl;
		}else{
			
		}
	}
}
