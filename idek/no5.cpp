#include <bits/stdc++.h>
using namespace std;
void ling(double r){
	cout<<"Luas Lingkaran: "<<22/7*r*r<<" cm2"<<endl;
	cout<<"Keliling Lingkaran: "<<22/7*r*2<<" cm"<<endl;
}
void rect(double a,double b){
	cout<<"Luas Persegi Panjang: "<<a*b<<" cm2"<<endl;
	cout<<"Keliling Persegi Panjang: "<<2*(a+b)<<" cm"<<endl;
}
int main(){
	double r,p,l;
	string c;
	cout<<"==============\n";
	cout<<"Program Menghitung Luas Bangun&Keliling Datar\n";
	cout<<"==============\n";
	while(true){
		cout<<"Pilih Bangun Datar:\n1.Lingkaran\n2.Persegi Panjang\n3.Exit\n";
		cout<<"Pilihan: ";
		cin>>c;
		cout<<"------------------------\n";
		cout<<fixed<<setprecision(2);
		if(c=="1"){
			cout<<"Masukan Jari-Jari(cm): ";
			cin>>r;
			ling(r);
		}else if(c=="2"){
			cout<<"Masukan Panjnag(cm): ";
			cin>>p;
			cout<<"Masukan Lebar(cm): ";
			cin>>l;
			rect(p,l);
		}else if(c=="3")break;	
		else cout<<"Masukan input yang benar\n";
		cout<<"------------------------\n";
	}
	
}
