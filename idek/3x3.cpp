#include <bits/stdc++.h>
using namespace std;
int a[3][3];
int b[3][3];
int det = 0;
void input(){
	cout<<"Masukin nilai matriks(3x3):\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	det=0;
	for(int i=0;i<3;i++){
		det+=a[0][i]*(a[1][(i+1)%3]*a[2][(i+2)%3]-a[1][(i+2)%3]*a[2][(i+1)%3]);
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			b[i][j]=((a[(j+1)%3][(i+1)%3] * a[(j+2)%3][(i+2)%3]) - (a[(j+1)%3][(i+2)%3] * a[(j+2)%3][(i+1)%3]));
		}
   }
}
int abs(int x){
	if(x<0)return -x;
	else return x;
}
int fpb(int x,int y){
	x=abs(x);
	y=abs(y);
	if(x==0)return y;
	else return fpb(y%x,x);
}
int main(){
   int choice=0;
   input();
   cout<<"Mau cari apa\n";
   while(true){
   		cout<<"1. Determinan\n2. Invers\n3. Adjoint\n4. Input matriks baru\n5. Exit\n";
   		cin>>choice;
   		if(choice==1){
   			cout<<"Determinan: "<<det<<endl;
		}else if(choice==2){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					if(b[i][j]%det==0){
						cout<<b[i][j]/det;
					}else{
						int hasil=b[i][j]/fpb(det,b[i][j]);
						if(det<0)hasil*=-1;
						cout<<hasil<<"/"<<abs(det)/fpb(det,b[i][j]);
					}
					cout<<'\t';
				}
				cout<<endl;
			}
		}else if(choice==3){
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<b[i][j]<<"\t";
				}
				cout<<endl;
			}
		}else if(choice==4){
			input();
		}else if(choice==5){
			break;
		}
   }
}
