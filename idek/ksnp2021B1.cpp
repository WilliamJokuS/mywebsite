#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a,b;
ll fpb(int x,int y){
	if(y==0)return x;
	else return fpb(y,x%y);
}
int main(){
	cin>>n>>a>>b;
	ll kpk=a*b/fpb(a,b);
	cout<<kpk/a+kpk/b<<endl;;
}

