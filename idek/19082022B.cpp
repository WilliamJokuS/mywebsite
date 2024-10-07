#include <bits/stdc++.h>
#define pb push_back
using namespace std;
vector <int> adj[200005];
int p[200005];
int sz[200005];
int find(int x){
	if(p[x]==x)return x;
	else return p[x]=find(p[x]);
}
void connect(int x,int y){
	int a=find(x),b=find(y);
	if(a>b)swap(a,b);
	p[a]=b;
	sz[b]+=sz[a];
	sz[a]=0;
	return;
}
int n,e,v1,v2;
int main(){
	vector<int> ans;
	cin>>n>>e;
	for(int i=1;i<=n;i++){
		p[i]=i;
		sz[i]=1;
	}
	for(int i=1;i<=e;i++){
		cin>>v1>>v2;
		if(v1>v2)swap(v1,v2);
		adj[v1].pb(v2);
	}
	ans.pb(0);
	int jum=0;
	for(int i=n;i>1;i--){
		jum++;
		for(int j=0;j<adj[i].size();j++){
			if(find(i)!=find(adj[i][j])){
				jum--;
				connect(i,adj[i][j]);
			}
		}
		ans.pb(jum);
	}
	reverse(ans.begin(),ans.end());
	for(auto i:ans){
		cout<<i<<endl;
	}
}
