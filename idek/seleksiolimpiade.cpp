#include <iostream>
#include <string.h>
using namespace std;
int tes1[85];
int tes2[85];
int tes3[85];
int main(){
	string peserta[85];
	int t,n,m,temp;
	string s,tmp;
	cin>>t;
	for(int i=1;i<=t;i++){
		for(int j=1;j<=n;j++){
			tes1[j]=-1;
			tes2[j]=-1;
			tes3[j]=-1;
		}
		cin>>n>>m;
		cin>>s;
		for(int j=1;j<=n;j++){
			cin>>peserta[j]>>tes1[j]>>tes2[j]>>tes3[j];
		}
		for(int j=n;j>=1;j--){
			for(int k=j;k>=1;k--){
				if(tes1[j]>tes1[k]){
					temp=tes1[j];
					tes1[j]=tes1[k];
					tes1[k]=temp;
					temp=tes2[j];
					tes2[j]=tes2[k];
					tes2[k]=temp;
					temp=tes3[j];
					tes3[j]=tes3[k];
					tes3[k]=temp;
					tmp=peserta[j];
					peserta[j]=peserta[k];
					peserta[k]=tmp;
				}
			}
		}		
		for(int j=n;j>=1;j--){
			for(int k=j;k>=1;k--){
				if(tes2[j]>tes2[k]){
					temp=tes1[j];
					tes1[j]=tes1[k];
					tes1[k]=temp;
					temp=tes2[j];
					tes2[j]=tes2[k];
					tes2[k]=temp;
					temp=tes3[j];
					tes3[j]=tes3[k];
					tes3[k]=temp;
					tmp=peserta[j];
					peserta[j]=peserta[k];
					peserta[k]=tmp;
				}
			}
		}
		
		for(int j=n;j>=1;j--){
			for(int k=j-1;k>=1;k--){
				if(tes3[j]>tes3[k]){
					temp=tes1[j];
					tes1[j]=tes1[k];
					tes1[k]=temp;
					temp=tes2[j];
					tes2[j]=tes2[k];
					tes2[k]=temp;
					temp=tes3[j];
					tes3[j]=tes3[k];
					tes3[k]=temp;
					tmp=peserta[j];
					peserta[j]=peserta[k];
					peserta[k]=tmp;
				}
			}
		}
		for(int j=1;j<=n;j++){
			if(peserta[j]==s){
				if(j<=m)cout<<"YA"<<endl;
				else cout<<"TIDAK"<<endl;
				break;
			}
			cout<<peserta[j]<<" "<<tes1[j]<<" "<<tes2[j]<<" "<<tes3[j]<<endl;
		}
	}	
}
