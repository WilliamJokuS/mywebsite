#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A,B,C,N=1000000;
bool besar =false;
long long pangkat(ll a,ll b){
	if(a==0)return 0;
	if(b==0)return 1;
	else if(b==1)return a;
	else{
		ll tmp=pangkat(a,b/2)%N;
		if(b%2==0){
			if(tmp*tmp>=N)besar=true;
			return (tmp*tmp)%N;
		}else{
			if(tmp*tmp*a>=N)besar=true;
			return (tmp*tmp*a)%N;
		}
	} 
}

int main(){
	cin>>A>>B;
	ll res=pangkat(A%N,B);
	if(pow(A,B) >= N) {
        long long tmp = res;
        short digit = 0;
        if(tmp == 0) digit = 1;
        for(;tmp > 0; digit++, tmp /= 10);
        digit = 6 - digit;
        while (digit--) cout<<0;
        cout<<res<<'\n';
    } else cout<<res<<'\n';
}
