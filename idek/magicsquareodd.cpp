#include <iostream>
using namespace std;
int i=2;
int a[100][100];
void magic(int n,int x,int y){
	while(i<=n*n){
		if(a[n][y+1]==0&&x==1&&y+1<=n){
			cout<<i<<" case 1\n";
			a[n][y+1]=i;
			i++;
			x=n;
			y++;
		}else if(a[x-1][1]==0&&y==n&&x-1>=1){
			a[x-1][1]=i;
			cout<<i<<" case 2\n";
			i++;
			x--;
			y=1;
		}else if(a[x-1][y+1]==0&&1<=x&&x-1<=n&&1<=y+1&&y+1<=n){
			a[x-1][y+1]=i;
			cout<<i<<" case 3\n";
			i++;
			x--;
			y++;
		}else{
			cout<<i<<"case 4\n";
			a[x+1][y]=i;
			i++;
			x++;
		}
	}
}
int main(){
	int n;
	cin>>n;
	a[1][n/2+1]=1;
	magic(n,1,n/2+1);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
/*
 8  1  6
 3  5  7   15
 4  9  2
 
 
 17  24  1    8  15
 23   5  7   14  16    
 4    6  13  20  22     65
 10  12  19  21  3
 11  18  25   2  9
 */
