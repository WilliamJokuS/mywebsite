#include <bits/stdc++.h>
using namespace std;
int main(){
	float uang,konvers;
	string konversi;
	cin>>uang>>konversi;
	cout<<fixed<<setprecision(2);
	if(konversi=="Dollar"){
		konvers=uang*0.000069;	
		cout<<"Rp"<<uang<<" = $ "<<konvers;
	}
	else if(konversi=="Yen"){
		konvers=uang*0.0076;
		cout<<"Rp"<<uang<<" = jpy "<<fixed<<konvers;
	}
	else {
		konvers=uang*0.0035;
		cout<<"Rp"<<uang<<" = php "<<fixed<<konvers;
	}
	cout<<endl;
}
