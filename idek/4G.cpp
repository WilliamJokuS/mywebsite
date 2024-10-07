#include <bits/stdc++.h>
using namespace std;
int M,N;
int grid[30][30],grid2[30][30];
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
	bool ada=true;
    while(ada){
        ada=false;
        for(int j=0;j<M-1;j++) {
            if(grid[j][c]!=0&&grid[j+1][c]==0){
                ada=true;
                swap(grid[j][c],grid[j+1][c]);
            }
        }
    }
}
int maxi=0,idxi,idxj,tmp;
void countM(){
	int temp;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			if(visited[i][j]||grid[i][j]==0)continue;
			temp=visit(i,j,grid[i][j]);
			if(temp>maxi){			
				idxi=i;
				idxj=j;
				maxi=temp;
			}
		}
	}
}
void reset(){
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++)grid[i][j]=grid2[i][j];
	}
	memset(visited,false,sizeof visited);
}
int main(){
	int ans=0;
	cin>>M>>N;
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			cin>>grid[i][j];
			grid2[i][j]=grid[i][j];
		}
	}
	
	for(int i=0;i<M;i++){
		for(int j=0;j<N;j++){
			int curr=0;
			memset(visited,false,sizeof visited);
			maxi=0;
			tmp=visit(i,j,grid[i][j]);
			if(tmp==1){
				reset();
				continue;
			}
			curr+=tmp*(tmp-1);
			for(int i=0;i<M;i++){
				for(int j=0;j<N;j++){
					if(visited[i][j])grid[i][j]=0;
				}
			}
			for(int i=0;i<N;i++)drop(i);
			memset(visited,false,sizeof visited);
			countM();
			memset(visited,false,sizeof visited);
			tmp=visit(idxi,idxj,grid[idxi][idxj]);
			if(grid[idxi][idxj]==0)tmp=0;
			reset();
			curr+=tmp*(tmp-1);
			ans=max(ans,curr);
		}
	}
	cout<<ans<<endl;
}
