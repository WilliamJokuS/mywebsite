#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define fi first
#define se second
#define pb push_back
vector<int> v[10005];
int n,tmp1,tmp2,ans=0,far;
bool visit[10005];
void dfs1(int idx,int cnt){
	visit[idx]=true;
	if(cnt>ans){
		ans=cnt;
		far=idx;
	}
	for(int i=0;i<v[idx].size();i++){
		if(!visit[v[idx][i]]){
			dfs1(v[idx][i],cnt+1);
		}
	}
}
void dfs2(int idx,int cnt){
	visit[idx]=true;
	ans=max(ans,cnt);
	for(int i=0;i<v[idx].size();i++){
		if(!visit[v[idx][i]]){
			dfs2(v[idx][i],cnt+1);
		}
	}
}
int main(){
	memset(visit,false,sizeof visit);
	cin>>n;
	for(int i=1;i<n;i++){
		cin>>tmp1>>tmp2;
		v[tmp1].pb(tmp2);
		v[tmp2].pb(tmp1);
	}
	dfs1(1,0);
	ans=0;
	memset(visit,false,sizeof visit);
	dfs2(far,0);
	cout<<ans<<endl;
}
