#include <iostream>
using namespace std;
int main(){
	int r,c;
	cin>>r>>c;
	int prefix[r+5][c+5];
	int a[r+5][c+5];
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<=4;i++){
		for(int j=0;j<=4;j++){
			prefix[i][j]=0;	
		}
	}
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+a[i][j];
		}
	}
	for(int r1=1;r1<=4;r1++){
		for(int c1=1;c1<=4;c1++){
			int low,high,mid;
			low=1;
			high=10;
			while(){
				mid=(low+high)/2;			
				int r2=r1+mid-1;
				int c2=c1+mid-1;
				if(prefix[r2][c2]-prefix[r2][c1-1]-prefix[r1-1][c2]+prefix[r1-1][c1-1]!=0)break;
			}
		}
	}
}

