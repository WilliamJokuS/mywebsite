#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,k,c,p;
int a[200005];
int b[200005];
ll tmp;
int main(){
	cin>>n>>k>>c>>p;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		int maksj=0,sisa;
		for(int j=1;j<=n;j++){
			tmp=a[i]+b[j]+abs(i-j)*c;
			if(tmp<=k){
				if(abs(i-j)+1==maksj){
					if(k-tmp>sisa)sisa=k-tmp;
				}
				if(abs(i-j)+1>maksj){
					maksj=abs(i-j)+1;
					sisa=k-tmp;
				}
			}
		}
		if(maksj==0)sisa=k;
		cout<<maksj<<" "<<sisa<<endl;
	}
	
}
