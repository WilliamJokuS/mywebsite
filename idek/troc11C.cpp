#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll x){
	return((x-2)*2+(x-2)*(x-3)+(x-2)*2);
}
int main(){
	ll x,y;
	cin>>x>>y;
	cout<<2*f(x)+2*f(y)<<endl;
} 
