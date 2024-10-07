#include <bits/stdc++.h>
#define iii pair<int, pair<int,int> >
#define fi first
#define se second
using namespace std;
int n;
iii wire[10005];
int p   [10005];
int sz  [10005];
int a   [10005][10005];
int find(int x){
	if(x==p[x])return x;
	else return p[x]=find(p[x]);
}
void gabung(int x,int y){
	int a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	p[a]=b;
	sz[b]+=a;
	sz[a]=0;
}
bool connected(int x,int y){
	return find(x)==find(y);
}
int main(){
	int ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		p[i]=i;
		sz[i]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int idx=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(a[i][j]==0)continue;
			wire[idx].fi=a[i][j];
			wire[idx].se.fi=i;
			wire[idx].se.se=j;
			idx++;
		}
	}
	sort(wire,wire+idx);
	for(int i=0;i<idx;i++){
		if(connected(wire[i].se.fi,wire[i].se.se)==false){
			gabung(wire[i].se.fi,wire[i].se.se);
			ans+=wire[i].fi;
		}
		if(sz[wire[i].se.fi]==n){
			cout<<ans<<endl;
			break;
		}
	}
	cout<<ans<<endl;
}
