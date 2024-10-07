#include <iostream>
#include <cmath>

using namespace std;
int main(){
	long long s,N;
	cin>>N;
	
	s=round(sqrt(N));
	
	if(s*s !=N){
		cout<<"lampu mati\n";
	}else{
		cout<<"lampu nyala\n";
	}
}
