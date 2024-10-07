#include <bits/stdc++.h>
using namespace std;
int fibo[100];
void gen_fibo(int x){
	fibo[1]=1;
	fibo[2]=1;
	for(int i=3;i<=x;i++){
		fibo[i]=fibo[i-1]+fibo[i-2];
	}
}
int main(){
	int n;
	cin>>n;
	gen_fibo(n);
	for(int i=1;i<=n;i++)cout<<fibo[i];
}
