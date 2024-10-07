#include <iostream>
using namespace std;
int max(int a,int b){
	if(a>b)return a;
	else return b;
}
int main(){
	int r,c;
	cin>>r>>c;
	int a[r+5][c+5];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>a[i][j];
		}
	}
	int prefixr[r+5][c+5];
	for(int i=0;i<r+5;i++){
		for(int j=0;j<c+5;j++){
			prefixr[i][j]=0;
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			prefixr[i][j]=prefixr[i][j-1]+a[i][j];
			//cout<<prefixr[i][j]<<" ";
		}
		//cout<<endl;
	}
	int max2d=-100000;
	for(int c1=1;c1<=c;c1++){
		for(int c2=c1;c2<=c;c2++){
			int dp[100];
			dp[1]=prefixr[1][c2]-prefixr[1][c1-1];
			for(int row=2;row<=r;row++){
				int sekarang=prefixr[row][c2]-prefixr[row][c1-1];
				dp[row]=max(dp[row-1]+sekarang,sekarang);
				if(dp[row]>max2d){
					max2d=dp[row];
				}
			}
		}
	}
	cout<<max2d<<endl;
}
