#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll n,m,a,x,y;
	cin>>n>>m>>a;
	x=n/a;y=m/a;
	if(n%a>0)x++;
	if(m%a>0)y++;
	cout<<x*y<<endl;
}
