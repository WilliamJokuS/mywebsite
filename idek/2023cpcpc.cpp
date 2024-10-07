#include <bits/stdc++.h>
using namespace std;

int main(){
	double r1,r2,d,t;
	cin>>t;
	while(t--){
		cin>>r1>>r2>>d;
		double tmp=pow(r2,3)-pow(r1,3)+pow(r1-d,3);
		cout<<fixed<<setprecision(8)<<r2-cbrt(tmp)<<endl;
	}
}
