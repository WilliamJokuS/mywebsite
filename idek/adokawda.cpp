#include <bits/stdc++.h>
using namespace std;
int digit[100];
bool cek(int x){
	for(int i=0;i<10;i++)digit[i]=0;//reset
	while(x>0){
		if(x%10==0)return false;
		digit[x%10]++;
		x=x/10;
		
 	}
	for(int i=1;i<10;i++){
		if(digit[i]>1)return false;
	}
	
	return true;
}
int ubah(string s){
	int ret=0,kali=1;
	for(int i=s.size()-1;i>=0;i--){
		ret+=(s[i]-'0')*kali;
		kali=kali*10;
	}
	return ret;
}
int main(){
	int cnt=0;
	string s="1234",s2="1000";
//	"1234"   "3"
	// 0123
	//char s[4]={'1','2','3','4'};
	int a=ubah(s),b=ubah(s2);
	cout<<a<<"+"<<b<<"="<<a+b;
//	        a=0-->+4*1
//	i=3  int a=4-->4+3*10
//	i=2  int a=34  34+2*100;
//	i=1  int a=234
//	i=0  int a=1234
//	for(int i=7000;i<7800;i++){
//		if(cek(i))cnt++;
//	}
//	cout<<cnt<<endl;
}
//digit[i]=banyaknya digit i di dalam bil x;
//
//1222          1234
//digit[1] =1   digit[1]=2; 
//digit[2] =3
//
//.....9=0
//
//1982-->
//2
//
//2 9 8 1
