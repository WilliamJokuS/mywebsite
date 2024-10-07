#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t,k,x,y;
	cin>>t;
	while(t--){
		cin>>k>>x>>y;
		if(x==1||y==1){
			cout<<1<<endl;
			continue;
		}
		ll tmp=1,lx=0,ly=0;
		while(x>tmp){
			tmp=tmp*k+1;
			lx++;
		}
		tmp=1;
		while(y>tmp){
			tmp=tmp*k+1;
			ly++;
		}
		ll sum=lx+ly;
		for(int i=1;i<=sum;i++){
			if(lx>ly){
				x=(x+k-2)/k;
				lx--;
			}else if(ly>lx){
				y=(y+k-2)/k;
				ly--;
			}else if(x==y){
				cout<<x<<"\n";
				break;
			}else{
				x=(x+k-2)/k;
				lx--;
				y=(y+k-2)/k;
				ly--;
			}
		}
	}
}
