#include <bits/stdc++.h>
using namespace std;
int nilai[300005];
int milih(int idx,int kap){
	if(idx==0)return 0;
	int ambil,lewat;
	lewat=milih(idx-1,kap);
	if(nilai[idx]<=kap){
		ambil=nilai[idx]+milih(idx-1,kap-nilai[idx]);
	}else{
		ambil=-1e5;
	}
	return max(ambil,lewat);
}
int main(){	
	int n;
	int c,tmp;
	cin>>n>>c;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		nilai[i]=tmp;
	}
	cout<<milih(n,c-1)<<endl;
}
