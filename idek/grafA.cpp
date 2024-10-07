#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,curr;
vector<int> alist[2005];
int jenis[2005];
queue<int> q;
bool notImpostor(){
	jenis[1]=0;
	q.push(1);
	while(q.empty()==false){
		curr=q.front();
		q.pop();
		int sz=alist[curr].size();
		for(int i=0;i<sz;i++){
			if(jenis[alist[curr][i]]==-1){
				if(jenis[curr]==1)jenis[alist[curr][i]]=0;
				else jenis[alist[curr][i]]=1;
				q.push(alist[curr][i]);
			}else if(jenis[alist[curr][i]]==jenis[curr])return false;
		}
	}
	return true;
}
int main(){
	int t;
	cin>>t;
	for(int z=1;z<=t;z++){
		for(int i=1;i<=2005;i++)alist[i].clear();
		memset(jenis,-1,sizeof jenis);
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>x>>y;
			alist[x].push_back(y);
			alist[y].push_back(x);
		}
		cout<<"Scenario #"<<z<<":\n";
		if(notImpostor())cout<<"No suspicious bugs found!";
		else cout<<"Suspicious bugs found!";
		if(z<t)cout<<"\n";
	}
		
}
