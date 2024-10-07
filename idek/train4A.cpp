#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
struct node{
	double x,y;
	double dist(node z){
		double tmp =(x-z.x)*(x-z.x)+(y-z.y)*(y-z.y);
		return sqrt(tmp);
	}
};
int sz[20005];
int par[20005];
node titik[10005];
int n,m,k;
double w=0,tmp1,tmp2;
pair<double,pair <int,int> >edge[20005];
int find(int x){
	if(par[x]==x) return x;
	return par[x]=find(par[x]);
}
void merge(int x,int y){
	int a=find(x),b=find(y);
	if(sz[a]>sz[b])swap(a,b);
	par[a]=b; 
	sz[b]+=sz[a];
	sz[a]=0;
	return;
}
bool isconnected(int x,int y){
	return find(x)==find(y);
}
int main(){
	int t,k;
	cin>>t;
	cout<<fixed<<setprecision(2);
	while(t--){
		w=0;
		for(int i=0;i<=10000;i++){
			par[i]=i,sz[i]=1;;
		}
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>tmp1>>tmp2;
			titik[i].x=tmp1;
			titik[i].y=tmp2;
		}
		k=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=i;j++){
				edge[k].second.first=i;
				edge[k].second.second=j;
				edge[k].first=titik[i].dist(titik[j]);
				k++;
			}
		}
		sort(edge,edge+k);
		for(int i=0;i<k;i++){
			if(isconnected(edge[i].second.first,edge[i].second.second)==false){
				merge(edge[i].second.first,edge[i].second.second);
				w+=edge[i].first;
			}
			if(sz[edge[i].second.first]==n)break;
		}
		cout<<w<<endl;
		if(t>0)cout<<endl;
		memset(titik,0,sizeof titik);
		memset(edge,0,sizeof edge);
	}
}

