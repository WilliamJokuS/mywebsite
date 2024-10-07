#include <bits/stdc++.h>
using namespace std;
int berat[100];
int nilai[100];
int knapsack(int idx,int kap){
	if(idx==0){
		return 0;
	}
	int ambil,lewat;
	lewat=knapscak(idx-1,kap);
	if(berat[idx]<=kap){
		ambil=nilai[idx]+knapsack(idx-1,kap-berat[idx]);
	}else{
		ambil=-100000;
	}
	return max(ambil,lewat);
	//memo
}
int main(){	
	int n;
	int c;
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>berat[i]>>nilai[i];
	}
	
}
