#include <bits/stdc++.h>
using namespace std;
int grid[305][305];
int tanda[305][305];
int n,m;
void tandai(int b, int k,int warna,int tinggi){
	if(b<1||b>n||k<1||k>m){
		return;
	}
	if(grid[b][k]<=tinggi){
		return;
	}
	if(tanda[b][k]>0){
		return;
	}
	tanda[b][k]=warna;
	tandai(b-1,k,warna,tinggi);
	tandai(b+1,k,warna,tinggi);
	tandai(b,k-1,warna,tinggi);
	tandai(b,k+1,warna,tinggi);
}
int banjir(int tinggi,int grid[305][305]){
	memset(tanda,0,sizeof tanda);
	int warna=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(grid[i][j]>tinggi&&tanda[i][j]==0){
				warna++;
				tandai(i,j,warna,tinggi);
			}
		}
	}
	return warna;
}
int main(){
	int max=1;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(banjir(grid[i][j],grid)>max)max=banjir(grid[i][j],grid);
		}
	}
	cout<<max<<endl;
	return 0;
}
