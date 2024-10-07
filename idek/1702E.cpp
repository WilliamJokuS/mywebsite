#include <bits/stdc++.h>
using namespace std;
int t,n;
vector <int> adj[200005];
int         cnt[200005];
bool vis [200005];
int col[200005];
int ans=1;
void dfs(int x,int par,int c){
	vis[x]=true;
	for(int i=0;i<adj[x].size();i++){
		if(vis[adj[x][i]]){
			if(par==adj[x][i])continue;
			if(col[adj[x][i]==col[x]])ans=0;
		}
		else dfs(adj[x][i],x,col[adj[x][i]]=c^1);
	}
}
bool solve(){
	for(int i=1;i<=n;i++){
		if(cnt[i]!=2)return false;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i])dfs(i,0,1);
	}
	
	if(ans==1)return true;
	else return false;
}
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		ans=1;
		memset(vis,false,sizeof vis);
		memset(cnt,0,sizeof cnt);
		memset(col,-1,sizeof col);
		for (auto& v : adj) {
   				v.clear();
		}
		int x,y;
		for(int i=1;i<=n;i++){
			cin>>x>>y;
			if(x==y)ans=0;
			cnt[x]++,cnt[y]++;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		if(solve())cout<<"YES\n";
		else cout<<"NO\n";
	}
}
