#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int t;
int a[12][12];
void ganti(int i,int j){
	if(a[i][j]==9)a[i][j]=1;
	else a[i][j]+=1;
}
int main(){
	cin>>t;
	ll tmp;
	while(t>0){
		t--;
		for(int i=1;i<=9;i++){
			cin>>tmp;
			for(int j=9;j>=1;j--){
				a[i][j]=tmp%10;
				tmp=tmp/10;
			}
		}
		int i=1,j=1;
		while(true){
			ganti(i,j);
			j+=3;
			i++;
			if(j==9){
				ganti(i,j);
				break;
			}
			if(j>9)j=j%8;
		}
		for(int i=1;i<=9;i++){
			for(int j=1;j<=9;j++){
				cout<<a[i][j];
			}
			cout<<"\n";
		}
	}
}
