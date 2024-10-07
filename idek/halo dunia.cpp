#include <iostream>
using namespace std;
int fpb(int a,int b){
	if (b==0){	
	return a;
	}
	else{
	return fpb(b,a % b);
	}
} 
int main(){
	int x,y;
	cin>>x>>y;
	cout<<fpb(x,y)<<" "<<x*y/fpb(x,y);
}
