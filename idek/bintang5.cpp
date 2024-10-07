#include <iostream>
using namespace std;
int main(){
	int n=5;
	char c;
	for(int brs=1; brs<=n; brs++) {
  		for(int kol=1; kol<=brs; kol++){
  		c = (char)kol+64;
  		cout << c;
  		}
  cout << "\n";
	}
}
