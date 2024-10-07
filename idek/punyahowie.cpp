#include <iostream>
using namespace std;
int bbm;
int mu;
int suhu;
float rp;
float hkonv;
float cc;
float skonv;
void kbbm(){
	cout << " " <<endl;
	cout << "Pilih Jenis BBM" <<endl;
 	cout << "1. Pertalite Rp 9000" <<endl;
 	cout << "2. Pertamax Rp 8000" <<endl;
 	cout << "3. Premium Rp 7000" <<endl;
 	cout << "-------------------" <<endl;
    cout << "Masukkan Nomor:";
    cin >> bbm;
        if(bbm==1)
        {
            cout << " " <<endl;
            cout << "Anda telah memilih Pertalite Rp 9000." <<endl;
        }
        else if(bbm==2)
        {
            cout << " " <<endl;
            cout << "Anda telah memilih Pertamax Rp 8000." <<endl;
        }
        else if(bbm==3)
        {
            cout << " " <<endl;
            cout << "Anda telah memilih PPremium Rp 7000." <<endl;
        }
        else {cout << "Error" <<endl;}
}
void uang(){
	cout << " " <<endl;
	cout << "Pilih Jenis Mata Uang" <<endl;
 	cout << "1. Dollar" <<endl;
 	cout << "2. Peso" <<endl;
 	cout << "3. Yen" <<endl;
 	cout << "-------------------" <<endl;
    cout << "Masukkan Nomor:";
    cin >> mu;
        if(mu==1)
        {
            cout << " " <<endl;
            cout << "Masukkan jumlah uang rupiah:" <<endl;
            cin >> rp;
            hkonv=rp*0.000069;
            cout <<"Hasil Konversi: " <<hkonv;
            cout <<" ";
            cout <<"Dollar";
        }
        else if(mu==2)
        {
            cout << " " <<endl;
            cout << "Masukkan jumlah uang rupiah:" <<endl;
            cin >> rp;
            hkonv=rp*0.0035;
            cout <<"Hasil Konversi: " <<hkonv;
            cout <<" ";
            cout <<"Peso";
        }
        else if(mu==3)
        {
            cout << " " <<endl;
            cout << "Masukkan jumlah uang rupiah:" <<endl;
            cin >> rp;
            hkonv=rp*0.0076;
            cout <<"Hasil Konversi: " <<hkonv;
            cout <<" ";
            cout <<"Yen";
        }
        else {cout << "Error" <<endl;}
}
void ksuhu(){
 	cout << " " <<endl;
	cout << "Pilih Jenis Suhu" <<endl;
 	cout << "1. Kelvin" <<endl;
 	cout << "2. Farenheit" <<endl;
 	cout << "3. Reamur" <<endl;
 	cout << "-------------------" <<endl;
    cout << "Masukkan Nomor:";
    cin >> suhu;
	if(suhu==1){
    	cout << " " <<endl;
        cout << "Masukkan suhu celcius:" <<endl;
    	cin >> cc;
    	skonv=cc+273;
        cout <<"Hasil Konversi: " <<skonv;
        cout <<" ";
        cout <<"K";
    }
    else if(suhu==2){
        cout << " " <<endl;
        cout << "Masukkan suhu celcius:" <<endl;
        cin >> cc;
        skonv=cc*1.8 + 32;
        cout <<"Hasil Konversi: " <<skonv;
        cout <<" ";
        cout <<"F";
    }
    else if(suhu==3){
        cout << " " <<endl;
        cout << "Masukkan suhu celcius:" <<endl;
        cin >> cc;
    	skonv=cc*0.8;
        cout <<"Hasil Konversi: " <<skonv;
        cout <<" ";
        cout <<"R";
    }else {cout << "Error" <<endl;}
}
int main(){
	int No;
	while(true){
	 	cout << "MENU KONVERSI" <<endl;
	 	cout << "=============" <<endl;
	 	cout << "1. BBM" <<endl;
	 	cout << "2. MATA UANG" <<endl;
	 	cout << "3. SUHU" <<endl;
	 	cout << "4. KELUAR" <<endl;
	 	cout << "-------------------" <<endl;
	 	cout << "Masukkan Nomor: ";
	 	cin >> No;
		if(No==1){
			kbbm();
		}else if(No==2){
			uang();
		}else if(No==3){
			ksuhu();
		}else if(No==4){
			break;
		}else{
			cout<<"Error\n";
		}
	}
 	return 0;
 }
