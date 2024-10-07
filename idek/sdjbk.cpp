#include <iostream>
using namespace std;
int f(int a,int b,int c){
	if (a%b == a){
		return c;	
	}
	else return f(a-b, b, c+1);
}
int main(){
	cout<<f(2020,29,2);
}
