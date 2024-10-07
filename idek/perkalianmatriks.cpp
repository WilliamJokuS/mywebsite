#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,p;
	cout<<"Masukan ukuran matriks(Ba x Ka x Kb): ";
	cin>>n>>m>>p;
	int a[n+5][m+5];
	int b[m+5][p+5];
	int c[n+5][p+5];
	cout<<"Masukan matriks 1:\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	cout<<"Masukan matriks 2:\n";
	for(int i=1;i<=m;i++){
		for(int j=1;j<=p;j++){
			cin>>b[i][j];
		}
	}
	cout<<"Hasil perkalian matriks:\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=p;j++){
			int sum=0;
			for(int k=1;k<=m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
