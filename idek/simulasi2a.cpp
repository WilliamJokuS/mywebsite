#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,tmp;
	cin>>a>>b>>c>>d;
	if(a<=c){
        while(a<=c){
	        if(a+b<=c){
	           a+=b;
	           tmp=a;
	        }else{
				tmp=c;
				break;
			}
	        if(c-d>=a){
	            c-=d;
	            tmp=c;
	        }else{
				tmp=a;
				break;
			}
    	}
    	cout<<tmp<<endl;
    }else cout<<a<<endl;
}
C
Binser
Cari nilai minimum
Kalo duit masi bersisa
Kekiri
Kalo ga kekanan
Kan awalnya k
Lalu dikurangin jumlah yg lebih besar dari nilai m
Itu cost buat keluarin
Lalu cost buat masukin, sort cari nilai minimum yg bisa terima
D
jadi simpan semua kemungkinan x^a + y^b dlu
soalnya 10^18 kira kira 2^60 an
jd loop gk bakal lebih dari 60
dah disimpan, sort, lalu loop interval aja
E
2 5 7
[-1, -1, -1, -1, -1, -1, -1, -1, -1, -1]
[-1, 2, -1, -1, 5, -1, 7, -1, -1, -1]
angka terbesar yang < 2*2
angka terbesar yang < 3*2
----
angka terbesar yang < 2*10^6

angka = 10*(s[i]-'0') + s[i-1]-'0'
arr[angka] = 1
for(0...10^6)
if(arr[i] == 0)
