#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int x2dec(char a,string b){
	int x,basis,digit,i;
	i=0;
	x=0;
	int n = b.size();
	digit = b[i]-'0';
	if (a=='b')
		basis=2;
	if(a=='o')
		basis=8;	
	if(a=='h'){
		basis=16;
	}
	for(i=0; i<=n-1;i++){
		if(b[i]>='0'&&b[i]<='9'){
			digit = b[i]-'0';
		}
		else{
			digit = b[i]-55;
		}
		x+=digit*pow(basis,n-1-i);
	}
	return x;
}
int main(){
	cout<<x2dec('b',"1111101100")<<"\n";
	
}
