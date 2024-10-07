#include <bits/stdc++.h>
using namespace std;
vector<int> lis[205];
int visit[205];
bool bi=true;
void dfs(int idx,int par,int col){
	if(visit[idx]!=-1){
		if(visit[idx]!=col)bi=false;
		return;
	}
	visit[idx]=col;
	for(int i=0;i<lis[idx].size();i++){
		if(lis[idx][i]==par)continue;
		dfs(lis[idx][i],idx,col^1);
	}
	return;
}
int main(){
	int n,edge,x,y;
	while(true){
		cin>>n;
		if(!n)break;
		cin>>edge;
		for(int i=0;i<n;i++){
			lis[i].clear();
		}
		memset(visit,-1,sizeof visit);
		for(int i=1;i<=edge;i++){
			cin>>x>>y;
			lis[x].push_back(y);
			lis[y].push_back(x);
		}
		bi=true;
		dfs(0,1,-1);
		if(bi){
			cout<<"BICOLORABLE.\n";
		}
		else cout<<"NOT BICOLORABLE.\n";
		
	}
}
