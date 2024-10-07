#include <iostream>
#include <cmath>
#include <string>
using namespace std;
void dec2x(int b,char a){
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
	for(int j=i-1;j>=0;j--){
		if(x[j]>9){
			char c=(char)x[j]+55;
			cout<<c;
		}else{
			cout<<x[j];
		}
	}
}
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
	string x="111";
	while(true){
		cin>>x;
		cout<<x2dec('h',x)<<endl;
	}/*
	cout<<"1101(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"11100(b)= "<<x2dec('b',"11100")<<"(d)\n";
	cout<<"110011(b)= "<<x2dec('b',"110011")<<"(d)\n";
	cout<<"100011(b)= "<<x2dec('b',"100011")<<"(d)\n";
	cout<<"11100110(b)= "<<x2dec('b',"11100110")<<"(d)\n";
	cout<<"10101001(b)= "<<x2dec('b',"10101001")<<"(d)\n";
	cout<<"1001110(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"101101(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"1111011(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"1001001(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"1110110001(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"10011010010(b)= "<<x2dec('b',"1101")<<"(d)\n";
	cout<<"10(0)= "<<x2dec('o',"10")<<"(d)\n";
	cout<<"F(h)= "<<x2dec('h',"F")<<"(d)\n";
	//cout<<"10(d)= "<<dec2x(10,'b');
	//cout<<"(b)\n";
/*	cout<<"16(d)= "<<dec2x(16,'o');
	cout<<"(o)\n";
	cout<<"225(d)= "<<dec2x(225,'h');
	cout<<"(h)\n";*/
}
