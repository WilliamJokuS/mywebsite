#include <bits/stdc++.h>
using namespace std;
int fpb(int a,int b){
	if(a==0||b==0)return a+b;
	return fpb(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<fpb(a,b)<<endl;
}
