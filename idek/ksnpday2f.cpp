#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll s(ll x){
	ll ret=0;
	while(x>0){
		ret+=x%10;
		x/=10;
	}
	return ret;
}
int main(){
	ll n;
	cin>>n;
	for(int b=1;b<=90;b++){
		ll d=b*b+4*n;
		ll tmp=sqrtl(d);
		if(tmp*tmp==d){
			ll x1=(-b+tmp)/2;
			ll x2=(-b-tmp)/2;
			//cout<<x1<<" "<<x2<<" "<<b<<endl;
			if(x1>=0&&b==s(x1)){
				cout<<x1<<endl;
				return 0;
			}
			if(x2>=0&&b==s(x2)){
				cout<<x2<<endl;
				return 0;
			}
		}
	}
	cout<<-1<<endl;
}
