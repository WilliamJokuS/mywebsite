#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m;
ll p[100005],sz[100005];
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
	int j=0;
	while(true){
		memset(ud,false,sizeof ud);
		j++;
		ll cnt=0,x,y;
		cin>>n>>m;
		if(n==0&&m==0)break;
		for(int i=1;i<=100000;i++){
			p[i]=i,sz[i]=1;;
		}
		for(int i=0;i<m;i++){
			cin>>x>>y;
			merge(x,y);
		}
		for(int i=1;i<=n;i++){
			if(ud[find(i)]==false){
				ud[find(i)]=true;
				cnt++;
			}
		}
		cout<<"Case "<<j<<": "<<cnt<<endl;
	}
	
}
