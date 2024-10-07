#include <iostream>
using namespace std;
int M;
int N;
int petak[100][100];
bool tanda[100][100];
void tandai(int b, int k,int warna){
	if(b<0||b>M||k<0||k>N){
		return;
	}
	if(petak[b][k]!=warna){
		return;
	}
	if(tanda[b][k]==true){
		return;
	}
	tanda[b][k]=true;
	tandai(b-1,k,warna);
	tandai(b+1,k,warna);
	tandai(b,k-1,warna);
	tandai(b,k+1,warna);
}
int main(){
	int nwarna=0;
	cin>>M>>N;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>petak[i][j];
		}
	}
	int b,k;
	cin>>b>>k;
	int warna=petak[b][k];
	tandai(b,k,warna);
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(tanda[i][j]==true)nwarna++;
		}
	}
	cout<<nwarna*(nwarna-1)<<endl;
}
