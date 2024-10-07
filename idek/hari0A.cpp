#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll m,x,y,tmp,jwb;
ll pangkat(ll a,ll b){
	if(b==0)return 1;
	else if(b==1)return a;
	else{
		tmp=pangkat(a,b/2)%m;
		if(b%2==0)return (tmp*tmp)%m;
		else return (tmp*tmp*b)%m;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin>>x>>y>>m;
	jwb=x;
	for(int i=2;i<=y;i++){
		jwb=pangkat(jwb,x)%m;
	}
	cout<<jwb<<"\n";
}

