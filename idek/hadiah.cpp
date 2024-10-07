#include <iostream>
using namespace std;
int A,B,C,N;
int pangkat(int a,int b){
	if(b==1){
		return a;
	}else if(b%2==0){
		return (pangkat(a,b/2) * pangkat(a,b/2) % N) % N;
	}else{
		return (pangkat(a,b/2) * pangkat(a,b/2)%N * a)%N;
	}
}
int main(){
	cin>>A>>B>>C>>N;
	int x=pangkat(B,C);
	cout<<pangkat(A,x)+1<<endl;
}
