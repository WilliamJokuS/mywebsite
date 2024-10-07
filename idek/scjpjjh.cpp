#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
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
	int t;
	string s;
	cin>>t;
	while(t>0){
		t--;
		ll cntc=0,cnti=0,x,y;
		cin>>n;
		for(int i=1;i<=100000;i++){
			p[i]=i,sz[i]=1;
		}
		while(getline(cin,c)){
			cin>>x>>y;
			if(c=='c')merge(x,y);
			else if(c=='q'){
				if(isconnected(x,y))cntc++;
				else cnti++;
			}else break;
		}	
		cout<<cntc<<","<<cnti<<endl;
	}
}
