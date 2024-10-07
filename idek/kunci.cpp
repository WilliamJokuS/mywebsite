#include <bits/stdc++.h>
using namespace std;
int jawaban[10005];
int main(){
	int soal,p,q,e,x,y,n;
	cin>>soal;
	for(int i=1;i<=soal;i++){
		jawaban[i]=0;
		cin>>p>>q>>e;
		for(int j=0;j<=e;j++){
			n=e-j*q;
			if(p%n==0){
				jawaban[i]=n/p;
				n=0;
				break;
			}
		}
	}
	for(int i=1;i<=soal;i++){
		cout<<"Kasus#"<<i<<": "<<jawaban[i]<<"\n";
	}
}
