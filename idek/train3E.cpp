#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int tmp1,tmp2,n;
vector <int> v[100005];
vector <int> ans;
int a[100005],b [100005];
void dfs(int idx,int par,int x,int y){
	if(a[idx]!=x){
		x^=1;
		ans.pb(idx);
	}
	for(int i=0;i<v[idx].size();i++){
		if(v[idx][i]==par)continue;
		dfs(v[idx][i],idx,y,x);
	}
}
int main(){
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>tmp1>>tmp2;
		v[tmp1].pb(tmp2);
		v[tmp2].pb(tmp1);
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
		a[i]^=b[i];
	}
	dfs(1,-1,0,0);
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}

