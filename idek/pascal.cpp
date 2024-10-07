#include <iostream>
using namespace std;
long factorial(int n){
   int c;
   long result = 1;
   for (c=1;c<=n;c++){
    	result=result*c;
    }
   return result;
}

int main(){
   int n,c;
   cin>>n;
   for (int i=0;i<n;i++){
    	for (c=0;c<=(n-i-2);c++){
          printf(" ");
		}
      	for (c=0;c<=i;c++){
          cout<<factorial(i)/(factorial(c)*factorial(i-c))<<" ";
		}
    cout<<"\n";
   }
}
