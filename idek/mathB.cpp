#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
int n;
int fpb(int a,int b){
	if(b==0)return a;
	else return fpb(b,a%b);
}
int cari(int x,int y){
	int gcd=a[x][1];
	for(int i=1;i<=n;i++){
		if(i!=x){
			gcd=fpb(gcd,a[x][i]);
			gcd=fpb(gcd,a[i][y]);
		}
	}
	return gcd;
}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		cout<<cari(i,i);
		if(i==n)cout<<"\n";
		else cout<<" ";
	}
}
F Radial Sweep
x,y -> sudut, garis miring
E (x sama) + (y sama) - (x dan y sama)
sn geometri + inverse modulo
C sieve of eratonphreses
B (x*y) * (x*z)/(y*z) = x^2
