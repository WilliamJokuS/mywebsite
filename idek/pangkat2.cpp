#include <iostream>
using namespace std;
int main(){
	long long a,b,c,temp;
	temp=1;
	cin>>a>>b>>c;
	for(int i=1;i<=b;i++){
		temp=temp*a;
	}
	cout<<temp%c;
}

