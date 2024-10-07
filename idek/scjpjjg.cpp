#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll p[100005],sz[100005];
ll a[30005];
bool ud[100005];
ll find(ll x){
	if(p[x]==x) return x;
	return p[x]=find(p[x]);
}
void merge(ll x,ll y){
	ll a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	p[a]=b; 
	sz[b]+=sz[a];
	sz[a]=0;return;
}
bool isconnected(ll x,ll y){
	return find(x)==find(y);
}
int main(){
	while(true){
		memset(ud,false,sizeof ud);
		ll cnt=0,x,y,k;
		cin>>n>>m;
		if(n==0&&m==0)break;
		for(int i=0;i<=100000;i++){
			p[i]=i,sz[i]=1;;
		}
		for(int i=1;i<=m;i++){
			cin>>k;
			for(int j=1;j<=k;j++){
				cin>>a[j];
			}
			for(int j=2;j<=k;j++){
				merge(a[j-1],a[j]);
			}
		}
		cout<<sz[find(0)]<<endl;
	}
	
}
