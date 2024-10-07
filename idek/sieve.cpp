#include <iostream>
using namespace std;
bool cekprima(long long a){
	if(a==1)return false;
	for(long long i=2;i*i<=a;i++){
		if(a%i==0)return false;
	}
	return true;
}
long long main(){
	long long t,k;
	long long n=1;
	long long prima[77780];
	for(long long i=1;i<=999000;i++){
		if(cekprima(i)==true){
			prima[n]=i;
			n++;
		}
	}
	cin>>t;
	for(long long j=1;j<=t;j++){
		cin>>k;
		cout<<prima[k]<<endl;
	}
}
