#include <bits/stdc++.h>
using namespace std;
typedef double db;
bool udh;
int n,a[10],idx;
double hor[10][3][10],ans[10];
double coba[4];
void horner(db x){
	hor[idx][2][n]=hor[idx][0][n];
	for(int i=n-1;i>=idx;i--){
		hor[idx][1][i]=hor[idx][2][i+1]*x;
		hor[idx][2][i]=hor[idx][1][i]+hor[idx][0][i];
	}
}
void ktemu(db x){
	ans[idx]=x;
	idx++;
	for(int i=n;i>=idx;i--){
		hor[idx][0][i]=hor[idx-1][2][i];
	}
	if(idx==n)udh=true;
}
void print(){
	cout<<"Horner: \n";
	for(int k=0;k<idx;k++){
		for(int i=0;i<=2;i++){
			if(i==2)cout<<"x="<<ans[k];
			for(int j=n;j>=k;j--){
				if(j==n)cout<<"\t|";
				cout<<hor[k][i][j]<<"\t";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	for(int i=0;i<idx;i++){
		if(ans[i]<0)cout<<"(x+"<<-ans[i]<<")";
		else cout<<"(x-"<<ans[i]<<")";
	}
	if(idx<n){
		cout<<"(";
		for(int i=n;i>=idx;i--){
			db tmp=hor[idx-1][2][i];
			if(tmp>0&&i<n)cout<<"+ ";
			if(tmp!=1||i-idx==0)cout<<tmp;
			if(i>0&&i!=idx)cout<<"x^"<<i-idx<<" ";
		}
		cout<<")";
	}
	cout<<endl;
}

int main(){
	int test=0;
	cout<<"Masukkan derajat polinomial: ";
	cin>>n;
	cout<<"Masukan nilai polinomial (a,b,c,..): ";
	for(int i=n;i>=0;i--){
		cin>>a[i];
		hor[0][0][i]=a[i];
	}
	while(test!=4){
		cout<<"==========================================\n";
		cout<<"f(x)= ";
		for(int i=n;i>=0;i--){
			if(a[i]>0&&i<n)cout<<"+ ";
			if(a[i]!=1||i==0)cout<<a[i];
			if(i>0)cout<<"x^"<<i<<" ";
		}
		cout<<"\n1. Cari Faktor\n2. Cari sisa bagi\n3. Ganti f(x)\n";
		cin>>test;
		if(test==1){
			udh=false;
			idx=0;
			for(int i=1;i*i<=abs(a[0]);i++){
				if(udh)break;
				//cout<<i<<endl;
				if(a[0]%i!=0)continue;
				for(int j=1;j*j<=abs(a[n]);j++){
					if(udh)break;
					if(a[n]%j!=0)continue;
					coba[0]=db(i)/db(j);
					coba[1]=db(a[0])/db(i)/db(j);
					coba[2]=db(a[0])/db(i)/(db(a[n])/db(j));
					coba[3]=db(i)/(db(a[n])/db(j));
					for(int k=0;k<4;k++){
						//cout<<"x= "<<coba[k]<<endl;
						if(udh)break;
						if(coba[k]==0)continue;
						while(true){
							horner(coba[k]);
							if(hor[idx][2][idx]==0)ktemu(coba[k]);
							else break;
							if(udh)break;
						}
						if(udh)break;
						while(true){
							horner(-coba[k]);
							if(hor[idx][2][idx]==0)ktemu(-coba[k]);
							else break;
							if(udh)break;
						}
					}
				}
			}
			cout<<endl;
			print();
		}else if(test==2){
			
		}else if(test==3){
			cout<<"Masukkan derajat polinomial: ";
			cin>>n;
			cout<<"Masukan nilai polinomial (a,b,c,..): ";
			for(int i=n;i>=0;i--){
				cin>>a[i];
				hor[0][0][i]=a[i];
			}
		}
	}
}
