#include <bits/stdc++.h>
using namespace std;
int c,r;
int botr;
int grid [25][15];
void drop(int i,int j){
	while(grid[i][j]==1&&grid[i+1][j]==0&&i+1<=r){
		swap(grid[i][j],grid[i+1][j]);
		i++;
	}
	return;
}
void cek(){
	bool ada=false;
	for(int i=1;i<=r;i++){
		bool same=true;
		for(int j=1;j<=c;j++){
			if(grid[i][j]!=1)same=false;
		}
		if(same){
			ada=true;
			botr=i;
			for(int j=1;j<=c;j++)grid[i][j]=0;
		}
	}
	if(!ada)return;
	for(int i=botr;i>=1;i--){
		for(int j=1;j<=c;j++)drop(i,j);
	}
	cek();
}

int main(){
	string s;
	cin>>r>>c;
	for(int i=1;i<=r;i++){
		cin>>s;
		for(int j=1;j<=c;j++){
			grid[i][j]=s[j-1]-'0';
		}
	}
	botr=r;
	cek();
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cout<<grid[i][j];
		}
		cout<<endl;
	}
}
