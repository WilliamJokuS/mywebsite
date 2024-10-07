#include <iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int a[r+5][c+5];
	int prefix[r+5][c+5];
	for(int i=0;i<r+5;i++){
		for(int j=0;j<c+5;j++){
			prefix[i][j]=0;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
			//cout<<prefix[i][j]<< " ";
		}
		//cout<<endl;
	}
	int q;
	cin>>q;
	for(int i=1;i<=q;i++){
		int r1,c1,r2,c2;
		cin>>r1>>c1>>r2>>c2;
		cout<<prefix[r2][c2]-prefix[r2][c1-1]-prefix[r1-1][c2]+prefix[r1-1][c1-1]<<endl;
	}
}
