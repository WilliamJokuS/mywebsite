#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pangkat(ll a,ll b,ll c){
	if(b==0)return 1ll;
	else if(b==1)return a;
	else{
		ll tmp=pangkat(a,b/2,c)%c;
		if(b%2==0){
			return (tmp*tmp)%c;
		}else if(b%2==1){
			return (tmp*tmp*a)%c;
		}	
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    
	int t;
	cin>>t;
	ll a,b,c;
	for(int i=1;i<=t;i++){
		cin>>a>>b>>c;
		cout<<i<<". ";
		cout<<pangkat(a,b,c)%c<<endl;
	}
}
