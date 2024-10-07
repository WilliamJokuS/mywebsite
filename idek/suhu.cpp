#include <bits/stdc++.h>
using namespace std;
int main(){
	double n;
	string c;
	while(true){
		cout<<"Pilih satuan:\n1.Celcius\n2.Farenheit\n3.Reamur\n4.Kelvin\n";
		cin>>c;
		cout<<"------------------------\n";
		cout<<fixed<<setprecision(2);
		if(c=="1"){
			cout<<"Masukan Suhu (dalam \370C): ";
			cin>>n;
			cout<<n<<" \370C = "<<(1.8*n)+32<<" \370F"<<endl;
			cout<<n<<" \370C = "<<(0.8*n)<<" \370R"<<endl;
			cout<<n<<" \370C = "<<273+n<<" K"<<endl;	
		}else if(c=="2"){
			cout<<"Masukan Suhu (dalam \370F): ";
			cin>>n;
			n-=32;
			cout<<n+32<<" \370F = "<<n*5/9<<" \370C"<<endl;	
			cout<<n+32<<" \370F = "<<(n*4/9)<<" \370R"<<endl;
			cout<<n+32<<" \370F = "<<n*5/9+273<<" K"<<endl;			
		}else if(c=="3"){
			cout<<"Masukan Suhu (dalam \370R): ";
			cin>>n;
			cout<<n<<" \370R = "<<n*5/4<<" \370C"<<endl;	
			cout<<n<<" \370R = "<<(1.8*n*5/4)+32<<" \370F"<<endl;
			cout<<n<<" \370R = "<<n*5/4+273<<" K"<<endl;			
		}else if(c=="4"){
			cout<<"Masukan Suhu (dalam K): ";
			cin>>n;
			n-=273;
			cout<<n+273<<" K = "<<(1.8*n)+32<<" \370F"<<endl;
			cout<<n+273<<" K = "<<(0.8*n)<<" \370R"<<endl;
			cout<<n+273<<" K = "<<n<<" \370C"<<endl;
		}else{
			cout<<"Masukan input yang benar\n";
		}
		cout<<"------------------------\n";
	}

	
	
}
