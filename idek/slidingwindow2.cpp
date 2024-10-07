#include <iostream>
int max(int a,int b){
	if(a>b){
		return a;
	}else{
		return b;
	}
}
using namespace std;
int main(){
	int n,m,sum=0,jwb=0,kiri=1;
	cin>>n>>m;
	int a[n+5];
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int kanan=1;kanan<=n;kanan++){
		sum+=a[kanan];
		while(sum>m){
			sum-=a[kiri];
			kiri++;
		}
		jwb= max(jwb,kanan-kiri+1);
	}
	cout<<jwb;	
}
