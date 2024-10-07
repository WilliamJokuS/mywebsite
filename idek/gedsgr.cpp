#include <iostream>
using namespace std;
int main(){
	int n=0;
	for(int i=400;i<=500;i++){
		if(i%3==0)n+=i;
	}
	cout<<n;
}
