#include <bits/stdc++.h>
using namespace std;
int n;
int cek(int x){
	if(x>n)return x-n;
	else return x;
}
int a[5][5];
int main(){
	n=3;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int sum1=0,sum2=0;
	for(int i=0;i<n;i++){
		int tmp=1;
		for(int j=1;j<=n;j++){
			tmp*=a[j][cek(i+j)];
		}
		sum1+=tmp;
	}
	for(int i=n+1;i<=2*n;i++){
		int tmp=1;
		for(int j=n;j>=1;j--){
			tmp*=a[j][cek(i-j)];
		}
		sum2+=tmp;
	}
	cout<<sum1-sum2<<endl;
}
