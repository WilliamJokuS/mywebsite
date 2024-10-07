#include <bits/stdc++.h>
using namespace std;
void a(char c,int n){
	for(int i=1;i<=n;i++)cout<<c;
}
int main(){
    char nama[35],kelas[35];
    double n1,n2,n3;
    a(' ',12);
    cout<<"DAFTAR NILAI";
    a(' ',12);
    cout<<endl;
	a('-',35);
	cout<<"\nNama: ";
	cin.getline(nama,35);
	cout<<"Kelas: ";
	cin.getline(kelas,35);
    a('-',35);
    cout<<"\nNilai Tugas  Nilai Mid    Nilai PAT\n";
    cout<<"     ";cin>>n1;cout<<"  ";
	cout<<"     ";cin>>n2;
	cin>>n3;
	a('-',35);
}

