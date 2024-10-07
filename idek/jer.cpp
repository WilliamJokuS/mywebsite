#include <iostream>
using namespace std;
int main(){
	int n,c,max;
	max=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max){
			max=a[i];
			c=1;
		}else if (a[i]==max){
			c++;
		}
	}
	cout<<c<<"\n";
	return 0;
}
