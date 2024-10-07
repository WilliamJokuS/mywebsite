#include <bits/stdc++.h>
using namespace std;
double eps=1e-5;
double skrt(double x){
	double ret=x;
	while(abs(ret-x/ret)>eps*ret){
		cout<<ret<<endl;
		ret=(x/ret+ret)/2;
		
	}
	return ret;
}
int main(){
	cout<<skrt(210)<<endl;
}


