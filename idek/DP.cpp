#include <iostream>
using namespace std;
int petak[35][35];
bool sudah[35][35];
int hasil [35][35];
int R=20;
int C=20;
int max(int x,int y){
	if(x>y)return x;
	else return y;
}
int cariMax(int b, int k){
	if(sudah[b][k]==true){
		return hasil[b][k];
	}
	if(b==R&&k==C){
		return petak[b][k];
	}
	int kanan,bawah;
	if(k+1<=C){
		kanan=petak[b][k]+cariMax(b,k+1);	
	}else{
		kanan=-1000;
	}
	if(b+1<=R){
		bawah=petak[b][k]+cariMax(b+1,k);
	}else{
		bawah=-1000;
	}
	hasil[b][k]=max(kanan,bawah);
	sudah[b][k]=true;
	return hasil[b][k];
}
int main(){
	for(int i=1;i<=R;i++){
		for(int j=1;j<=C;j++){
			petak[i][j]=1;
		}
	}
	cout<<cariMax(0,0);
}
