#include <bits/stdc++.h>
using namespace std;
int n;
int p[100005],sz[100005];
int count(int x){
	int ret=0;
	while(x>=1){
		if(x%2==1)ret++;
		x/=2;
	}
	return ret;
}
int find(int x){
	if(p[x]==x) return x;
	return p[x]=find(p[x]);
}
void merge(int x,int y){
	int a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	p[a]=b; 
	sz[b]+=sz[a];
	sz[a]=0;return;
}
int isconnected(int x,int y){
	return find(x)==find(y);
}

int main(){
	int t;
	cin>>t;
	vector< pair<int,pair<int,int> > > bridge;
	while(t--){
		int weight=0;
		int m[100005];
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>m[i];
			p[i]=i;
			sz[i]=1;
		}
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				bridge.push_back({count(m[i]^m[j]),{i,j}});
			}
		}
		sort(bridge.begin(),bridge.end());
		for(int i=0;i<bridge.size();i++){
			if(!isconnected(bridge[i].second.first,bridge[i].second.second)){
				merge(bridge[i].second.first,bridge[i].second.second);
				weight+=bridge[i].first;
			}
			if(sz[find(bridge[i].second.first)]>=n){
				cout<<weight<<endl;
				break;
			}
		}
		bridge.clear();
	}
}
