#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,b;
ll fpb(ll x,ll y){
	if(y==0)return x;
	else return fpb(y,x%y);
}
int main(){
	cin>>a>>b;
	cout<<fpb(a,b)<<endl;
}

