#include <bits/stdc++.h>
#define fi first
#define se second
typedef long long ll;
using namespace std;
ll par[10005],sz[10005];
pair<ll, pair <int,int> > a[10005];
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
	for(int z=1;z<=t;z++){
		for(int i=0;i<=10000;i++){
			par[i]=i,sz[i]=1;;
		}
		cin>>n>>m;
		for(int i=1;i<=m;i++){
			cin>>tmp1>>tmp2>>k;
			a[i].fi=k;
			a[i].se.fi=tmp1;
			a[i].se.se=tmp2;
		}
		sort(a+1,a+m+1);
		w=a[m].fi;
		for(int i=m;i>=i;i--){
			if(isconnected(a[i].se.fi,a[i].se.se)==false){
				merge(a[i].se.fi,a[i].se.se);
				w=min(a[i].fi,w);
			}
			if(sz[find(a[i].se.fi)]==n){
				cout<<"Case #"<<z<<": "<<w<<endl;
				break;
			}
		}
	}
}
