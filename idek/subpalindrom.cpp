#include <iostream>
using namespace std;
int prefix[25][10];
int main(){
	string s="ABBCDECEF";
	for(int i=1;i<=9;i++){
		int angka=s[i]-'A';
		prefix[angka][i]++;
	}
	for(int angka=0;angka<6;angka++){
		for(int i=2;i<=n;i++){
			prefix[angka][i]+=prefix[angka][i-1];
		}
	}
	int l,r,q;
	cin>>q;
	for(int i=1;i<=q;i++){
		int nGanjil=0;
		for(int angka=0;angka<6;angka++){
			int kemunculan = prefix[angka][r]-prefix[angka][l-1];
			if(kemunculan%2==1){
				nGanjil++;
			}
		}
		if(nGanjil>1){
			cout<<"Tidak"<<endl;
		}
	}
		
}
