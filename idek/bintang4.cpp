#include <iostream>
using namespace std;
int main(){
	int n=5;
	int a=1;
	for(int brs=1; brs<=n; brs++) {
  		for(int kol=1; kol<=brs; kol++){
  		cout << a<<" ";
  		a++;
  		}
  cout << "\n";
	}
}
