#include <bits/stdc++.h>
using namespace std;
int main(){
	float harga;
	cin>>harga;
	cout<<fixed<<setprecision(2);
	if(harga>=100000)cout<<harga*0.9;
	else if(harga>=50000)cout<<harga*95/100;
	else cout<<harga; 
	cout<<endl;
}
