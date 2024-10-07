#include <iostream>
using namespace std;
long long pangkat(long long a,long long b,long long c){
	if(b==0){
		return 1;
	}else if(b==1){
		return 1;
	}
	else if(b%2==0){
		long long tmp=pangkat(a,b/2,0)%c;
		return tmp*tmp %c;
	}else{
		long long tmp=pangkat(a,b/2,0);
		return tmp*tmp*a %c;
	}
}
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	cout<<pangkat(a,b,c);
}

