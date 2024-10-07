#include <iostream>
using namespace std;
int C;
int koin[100];
int memo[100][100];
int hitung(int total,int idx){
	if(total<0)return 0;
	if(total==0)return 1;
	if(idx==0)return 0;
	if(memo[total][idx]!=0)return memo[total][idx];
	int ambil=hitung(total-koin[idx],idx);
	int lewat=hitung(total,idx-1);
	memo[total][idx]=lewat+ambil
	return memo[total][idx];
}
int main(){
	int n;
	cin>>C;
	cin>>n;
	for(int i=1;i<=C;i++){
		cin>>koin[i];
	}
	cout<<hitung(n,C);
}




