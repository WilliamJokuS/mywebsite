#include<iostream>
using namespace std;
int main(){
	int takhir=0,t;
	int a[5][10]={{1,1,2,1,1,2,1,1,1,2}, 
				  {2,1,2,1,1,1,0,2,1,2}, 
				  {1,1,1,0,2,2,1,1,0,1},
				  {1,0,2,1,1,2,0,1,1,2},
				  {1,1,1,2,1,1,1,0,1,1}};
	char kode[5][5]={"05","08","11","15","21"};
	int data[5];
	int total[5];
	for(int i=0;i<3;i++){
		total[i]=0;
	}
	cout<<"\tPasangan 01\tPasangan 02\t Tidak sah\t\tTotal\n";
	for(int i=0;i<5;i++){
		t=0;
		cout<<"TPS "<<kode[i]<<"\t\t";
		for(int j=0;j<3;j++){
			data[j]=0;
		}
		for(int j=0;j<10;j++){
			data[a[i][j]]++;
			t++;
		}
		cout<<data[1]<<"\t\t"<<data[2]<<"\t\t "<<data[0]<<"\t\t"<<t<<"\n";
		for(int j=0;j<3;j++){
			total[j]+=data[j];
		}
		takhir+=t;
	}
	cout<<"Sub Total\t"<<total[1]<<"("<<total[1]*100/takhir<<"%)"
	           <<"\t\t"<<total[2]<<"("<<total[2]*100/takhir<<"%)"
	           <<"\t\t"<<total[0]<<"("<<total[0]*100/takhir<<"%)"<<"\t\t"<<takhir;
}
/*TPS05 7 3 0 10 TPS08 5 4 1 10 TPS11 6 2 2 10 TPS15 5 3 2 10 TPS21 8 1 1 10 =================================================== Sub Total 31 (62%) 13 (26%) 6 (12%)
Total 50 suara */
