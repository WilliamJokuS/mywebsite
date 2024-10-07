#include <bits/stdc++.h>
using namespace std;
int main(){
	float a,b,c;
	cout<<"Masukan nilai a b c (ax^2+bx+c): ";
	cin>>a>>b>>c;
	if(b*b-4*a*c<0){
		cout<<"No solution\n";
		return 0;
	}
	float tmp1=-b+sqrt(b*b-4*a*c);
	tmp1/=2*a;
	float tmp2=-b-sqrt(b*b-4*a*c);
	tmp2/=2*a;
	cout<<fixed<<setprecision(2);
	
	cout<<tmp1<<endl;
	if(tmp1!=tmp2)cout<<tmp2<<endl;
}
