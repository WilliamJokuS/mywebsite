#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	while(a>0&&b>0){
		int tmp=a%b;
		a=b;
		b=tmp;
	}
	cout<<a+b<<endl;
}
