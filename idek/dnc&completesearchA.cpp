#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a,b,c;
void compare(ll a,ll b,ll c){
	if (a<=b&&a<=c)cout<<a<<" "<<min(b,c)<<" "<<max(b,c)<<endl;
	else if(b<=c&&b<=a)cout<<b<<" "<<min(a,c)<<" "<<max(a,c)<<endl;
	else if (c<=a&&c<=b)cout<<c<<" "<<min(b,a)<<" "<<max(b,a)<<endl;
}
void jawab(ll a,ll b, ll c){
	ll x,y,z;
	for(int i=-100;i<=100;i++){
		for(int j=-b;j<=b;j++){
			if(b/(i*j)*b/(i*j)==c-i*i-j*j&&b/(i*j)==a-i-j){
				x=a-i-j;
				y=i;
				z=j;					
				compare(x,y,z);
				return;
			}
		}
	}
	cout<<"No solution.\n";
	return;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		t--;
		cin>>a>>b>>c;
		jawab(a,b,c);
	}
}
