#include <bits/stdc++.h>
using namespace std;
pair<int,int> position[10];
int grid[10][10];
int ans=0;
bool check(){
	//for(int i=1;i<=8;i++)if(grid[position[i].first][position[i].second]==2)return false;
	for(int i=1;i<=8;i++){
		for(int j=1+i;j<=8;j++){
			if(position[i].first==position[j].first)return false;
			if(position[i].second==position[j].second)return false;
			int horDiff=abs(position[i].first-position[j].first);
			int verDiff=abs(position[i].second-position[j].second);
			if(horDiff==verDiff)return false;
		}
	}
	return true;
}
void put(int row){
	if(row>8){
		if(check()){
			ans++;
			int out[10][10];
			memset(out,0,sizeof out);
			for(int i=1;i<=8;i++){
				out[position[i].first][position[i].second]=1;
			}
			for(int i=1;i<=8;i++){
				for(int j=1;j<=8;j++){
					cout<<out[i][j]<<" ";
				}
				cout<<endl;
			}
			cout<<endl;
		}
		return;
	}
	for(int i=1;i<=8;i++){
		position[row]=make_pair(row,i);
		put(row+1);
	}
}

int main(){
	char c;
//	for(int i=1;i<=8;i++){
//		for(int j=1;j<=8;j++){
//			cin>>c;
//			if(c=='*')grid[i][j]=2;
//			
//		}
//	}
	put(1);
	cout<<ans<<endl;
}
