#include <iostream>
using namespace std;
int main(){
	int n=5;
	for(int brs=1; brs<=n; brs++) {
  		for(int kol=1; kol<=n; kol++){
	  		if(kol==brs){
	  			cout<<"X";
			}else if(kol==1 || kol==n){
	  			cout<<"X";
			}else{
				cout<<"_";
			}
		}
		cout<<"\n";	
	}
}
