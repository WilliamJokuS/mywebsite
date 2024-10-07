#include <bits/stdc++.h>
using namespace std;
vector <int> a[105];
int n,m,tmp1,tmp2;
bool vis[105];
void dfs(int idx){
	vis[idx]=true;
	for(int i=0;i<a[idx].size();i++){
		if(vis[a[idx][i]]==true)continue;
		dfs(a[idx][i]);
	}
	return;
}
int main(){
	memset(vis,false,sizeof vis);
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>tmp1>>tmp2;
		a[tmp1].push_back(tmp2);
		a[tmp2].push_back(tmp1);
	}
	if(n!=m||n<3){
		cout<<"NO\n";
		return 0;
	}
	dfs(1);
	for(int i=1;i<=n;i++){
		if(vis[i]==false){
			cout<<"NO\n";
			return 0;
		}
	}
	cout<<"FHTAGN!\n";
}
