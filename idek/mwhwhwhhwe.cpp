#include <iostream>
using namespace std;
float uang;
void bbm(){
	int c;
	while(true){
		cout<<"KONVERSI BBM\n===========\n1.PERTAMAX\n2.PERTALITE\n3.PERTAMAX TURBO\n4. KEMBALI\n";
		cin>>c;
		if(c==4)break;
		else if(c<1||c>4){
			cout<<"ERROR: Tidak ada pilihan '"<<c<<"'\n";
			continue;
		}
		cout<<"Masukan Uang yang Anda Miliki: ";
		cin>>uang;
		if(c==1){
			cout<<uang/9000<<" liter\n";
		}else if(c==2){
			cout<<uang/7650<<" liter\n";
		}else if(c==3){
			cout<<uang/12300<<" liter\n";
		}
	}
}
void matauang(){
	int c;
	while(true){
		cout<<"KONVERSI UANG\n===========\n1. USD\n2. JPY\n3. MYR\n4. KEMBALI\n";
		cin>>c;
		if(c==4)break;
		else if(c<1||c>4){
			cout<<"ERROR: Tidak ada pilihan '"<<c<<"'\n";
			continue;
		}
		cout<<"Masukan Uang yang Anda Miliki(Rp): ";
		cin>>uang;
		if(c==1){
			cout<<uang*0.000071<<" USD\n";
		}else if(c==2){
			cout<<uang*0.00081<<" JPY\n";
		}else if(c==3){
			cout<<uang*0.0003<<" MYR\n";
		}
	}
}
void suhu(){
	int c;
	float temp;
	while(true){
		cout<<"KONVERSI SUHU\n===========\n1. FARENHEIT\n2. REAMUR\n3. KELVIN\n4. KEMBALI\n";
		cin>>c;
		if(c==4)break;
		else if(c<1||c>4){
			cout<<"ERROR: Tidak ada pilihan '"<<c<<"'\n";
			continue;
		}
		cout<<"Masukan Suhu(\370C): ";
		cin>>temp;
		if(c==1){
			cout<<temp*1.8+32<<" \370F\n";
		}else if(c==2){
			cout<<temp*0.8<<" \370R\n";
		}else if(c==3){
			cout<<temp+273<<" K\n";
		}
	}
}
int main(){
		cout<<fixed<<setprecision(2);
	float uang;
	int c;
	while(true){
	
		cout<<"MENU KONVERSI\n===========\n1.BBM (3 JENIS)\n2.MATA UANG (3 JENIS)\n3.SUHU (3 JENIS)\n4.KELUAR\n";
		cin>>c;
		if(c==1){
			bbm();
		}else if(c==2){
			matauang();
		}else if(c==3){
			suhu();
		}else if(c==4){
			break;
		}else{
			cout<<"ERROR: Tidak ada pilihan '"<<c<<"'\n";
		}
	}
	cout<<"TERIMA KASIH TELAH MENGGUNAKAN LAYANAN KAMI\n";
}
