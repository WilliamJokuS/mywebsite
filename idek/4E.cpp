#include <bits/stdc++.h>
using namespace std;
int M,N;
int grid[30][30];
bool visited[30][30];
int visit(int b,int k,int warna){
	if(b<0||b>M||k<0||k>N)return 0;
	if(grid[b][k]!=warna)return 0;
	if(visited[b][k]==true)return 0;
	visited[b][k]=true;
	int cnt=1;
	cnt+=visit(b-1,k,warna);
	cnt+=visit(b+1,k,warna);
	cnt+=visit(b,k-1,warna);
	cnt+=visit(b,k+1,warna);
	return cnt;
}
void drop(int c){
	for(int i=M-2;i>=0;i--){
		for(int j=i;j>=0;j--){
			if(grid[j+1][c])continue;
			else swap(grid[j][c],grid[j+1][c]);
		}
	}
}
int main(){
	cin>>M>>N;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>grid[i][j];
		}
	}
	int maxi=0,idxi,idxj,tmp;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(visited[i][j])continue;
			tmp=visit(i,j,grid[i][j]);
			if(tmp>maxi){			
				idxi=i;
				idxj=j;
				maxi=tmp;
			}
		}
	}
	memset(visited,false,sizeof visited);
	tmp=visit(idxi,idxj,grid[idxi][idxj]);
	for(int i=0;i<M;i++){
		for(int j=1;j<N;j++){
			if(visited[i][j])grid[i][j]=0;
		}
	}
	for(int i=0;i<N;i++)drop(i);
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(grid[i][j])cout<<grid[i][j]<<" ";
			else cout<<". ";
		}
		cout<<endl;
	}
}
//3 3 4 2 4 3 5
//2 1 1 1 3 5 5
//3 1 4 1 1 4 5
//3 3 4 3 3 1 5

