#include <bits/stdc++.h>
using namespace std;
int main(){
	double b,t,bmi;
	cout<<"==============\n";
	cout<<"Program Menghitung BMI\n";
	cout<<"==============\n";
	cout<<"Masukan Berat Badan(dalam kg): ";
	cin>>b;
	cout<<"Masukan Tinggi Badan(dalam cm): ";
	cin>>t;
	t/=100;
	bmi=b/t/t;
	cout<<"BMI: "<<bmi<<endl;
	if(bmi<18.1)cout<<"Anda Underweight\n";
	else if(bmi<23.1)cout<<"Anda Normal\n";
	else if(bmi<=28.1)cout<<"Anda Overweight\n";
	else cout<<"Anda Obesitas\n";
}
