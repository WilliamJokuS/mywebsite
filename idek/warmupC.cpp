#include <bits/stdc++.h>
using namespace std;
bool cek(long long x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	long long x=5*7*11*13+1;
	cout<<x<<endl;
	for(int i=1;i<=10;i++){
		if(x%2!=0)break;
		cout<<x/2<<endl;
		x/=2;
	}
}
