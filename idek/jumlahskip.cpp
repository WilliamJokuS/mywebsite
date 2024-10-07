#include <iostream>
using namespace std;
int poin[100];
int a[100];
int f(int idx){
	if(idx==0)return 0;
	if(idx==1){
		return max(0,a[idx]);
	}
	return max(poin[idx]+f(idx-2),f(idx-1));
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
}
