#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double tot=0,x;
	cout<<"==============\n";
	cout<<"Program Menghitung Nilai Rata2 Kelas\n";
	cout<<"==============\n";
	cout<<"Masukan Jumlah Murid: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"Nilai Murid "<<i<<": ";
		cin>>x;
		tot+=x;
	}
	cout<<"Rata2 Kelas: "<<tot/n<<endl;
}
