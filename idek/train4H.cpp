#include <bits/stdc++.h>
#define fi first
#define se second
typedef long long ll;
using namespace std;
ll par[500005],sz[500005];
ll n,m,tmp1,tmp2,k,w=0;
ll find(ll x){
	if(par[x]==x) return x;
	return par[x]=find(par[x]);
}
void merge(ll x,ll y){
	ll a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	par[a]=b; 
	sz[b]+=sz[a];
	sz[a]=0;
	return;
}
bool isconnected(ll x,ll y){
	return find(x)==find(y);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		w=0;
		for(int i=0;i<=500000;i++){
			par[i]=i,sz[i]=1;;
		}
		cin>>n>>m;
		if(n==0&m==0)break;
		for(int i=1;i<=m;i++){
			cin>>tmp1>>tmp2;
			if(isconnected(tmp1,tmp2))continue;
			merge(tmp1,tmp2);
		}
		for(int i=1;i<=n;i++){
			w=max(w,sz[find(i)]);
		}
		cout<<w<<endl;
	}
}
