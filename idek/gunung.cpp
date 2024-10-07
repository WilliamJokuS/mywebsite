#include <iostream>
using namespace std;
void gunung(int n){
	if(n==1){
		cout<<"*\n";
	}else{
		gunung(n-1);
		for(int i=1;i<=n;i++){
			cout<<"*";
		}
		cout<<"\n";
		gunung(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	gunung(n);
}
