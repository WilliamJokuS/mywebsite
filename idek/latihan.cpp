#include <iostream>
#include <cmath>
#include <string>
using namespace std;
string dec2x(int b,char a){
	int z,i,basis;
	z=0;
	i=0;
	int x[20];
	string y[20];
	if(a=='b')
		basis=2;
	if(a=='o')
		basis=8;
	if(a=='h'){
		basis=16;
	}
	do{
		x[i]=b%basis;
		b=b/basis;
		i++;
	}while(b>0);
	for(int j=i;j>=0;j--){
		y[i-j]=x[j]-'0';
	}
	return y;
}
int main(){
	cout<<dec2x(10,'b');
}
