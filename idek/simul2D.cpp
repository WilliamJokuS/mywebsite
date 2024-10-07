#include <bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<fixed<<setprecision(12)<<(a/b)/(1-(1-a/b)*(1-c/d))<<endl;
	
}
