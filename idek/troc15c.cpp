#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fpb,kpk;
int main(){
	cin>>fpb>>kpk;
	if(kpk%fpb!=0)cout<<-1<<" "<<-1<<endl;
	else if(kpk==fpb)cout<<kpk<<" "<<kpk<<endl;
	else{
		ll tmp=kpk/fpb;
		ll jwb=1;
		for(ll i=2;i*i<=tmp;i++){
			if(tmp%i==0&&(tmp/i)%i!=0){
				if(i%((tmp/i)%i)!=0)jwb=i;
			}
		}
		cout<<fpb*jwb<<" "<<fpb*(tmp/jwb)<<endl;
	}
}
