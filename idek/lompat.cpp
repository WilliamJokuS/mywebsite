#include <iostream>
using namespace std;
int n;
int a[100];
int poin[100];
int f(int i){
	if(i==n)return poin[i];
	if(i==n-1)return poin[i]+f(i+1);
	int lompat1=poin[i]+a[i+1];
	int lompat2=poin[i]+a[i+2];
	return poin[i]+max(lompat1,lompat2);
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}

//7 -1 -8 -100 900
