#include <bits/stdc++.h>
using namespace std;
int n;
int a[101][101][101];
bool kur[101][101][101];
void generateOdd(int sz){
	int x=1,y=sz/2+1,i=2;
	a[sz][x][y]=1;
	while(i<=sz*sz){
		if(a[sz][sz][y+1]==0&&x==1&&y+1<=sz){
			x=sz;
			y++;
		}else if(a[sz][x-1][1]==0&&y==sz&&x-1>=1){
			x--;
			y=1;
		}else if(a[sz][x-1][y+1]==0&&1<=x&&x-1<=sz&&1<=y+1&&y+1<=sz){
			x--;
			y++;
		}else{
			x++;
		}
		a[sz][x][y]=i;
		i++;
	}
	return;
}
void generate4(){
	int x=1;
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			if(i==j||i+j==5){
				kur[4][i][j]=true;
			}
		}
	}
}
int modd(int x){
	if(x%4==0)return 4;
	else return x%4;
}
void generateEven(int sz){
	int size=sz/2;
	generateOdd(size);
	int dx[4]={0,size,0,size};
	int dy[4]={0,size,size,0};
	for(int k=0;k<4;k++){
		for(int i=1;i<=size;i++){
			for(int j=1;j<=size;j++){
				a[sz][i+dx[k]][j+dy[k]]=a[size][i][j]+k*size*size;
			}
		}
	}
	for(int i=1;i<=size;i++){
		for(int j=1;j<=sz;j++){
			if(j==size/2)if(i==1||i==size)continue;
			if(j>size/2){
				if(j==size){
					if(i!=1&&i!=size)continue;
				}else if(sz-j>=size/2-1)continue;
			}
			swap(a[sz][i][j],a[sz][i+size][j]);
		}
	}
	if(size==3){
		swap(a[6][2][1],a[6][5][1]);
		swap(a[6][2][2],a[6][5][2]);
	}
}

void generateEven4(int sz){
	generate4();
	int x=1;
	for(int i=1;i<=sz;i++){
		for(int j=1;j<=sz;j++){
			kur[sz][i][j]=kur[4][modd(i)][modd(j)];
			if(kur[sz][i][j])a[sz][i][j]=sz*sz+1-x;
			else a[sz][i][j]=x;
			x++;
		}
	}
}
int main(){
	cin>>n;
	if(n==2)cout<<"There are no 2x2 magic square\n";
	else if(n%2==1)generateOdd(n);
	else if(n%4==2)generateEven(n);
	else generateEven4(n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[n][i][j]<<"\t";
		}
		cout<<endl;
	}
}
