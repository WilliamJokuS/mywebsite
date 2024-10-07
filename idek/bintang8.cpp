#include <iostream>
using namespace std;
int main(){
	int n=9;
	for(int brs=1; brs<=n; brs++) {
  		for(int kol=1; kol<=n; kol++){
  		if(brs==(n+1)/2 || kol==1 || kol==n){
	  			cout<<"H";
			}else{
				cout<<"_";
			}
		}
		cout<<"\n";	
	}
}
