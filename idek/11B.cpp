#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int v,e;
int INF=0x3f3f3f3f;
bool ncycle;
vector<int> edge[505],weight[505];
int dis[505];
void bellman(){
	for(int i=1;i<v;i++){
		for(int j=0;j<v;j++){
			for(int k=0;k<edge[j].size();k++){
				if(dis[j]==INF)continue;
				dis[edge[j][k]]=min(dis[edge[j][k]],dis[j]+weight[j][k]);
			}
		}
	}
	for(int i=0;i<v;i++){
		for(int j=0;j<edge[i].size();j++){
			if(dis[edge[i][j]]>dis[i]+weight[i][j]&&dis[edge[i][j]]!=INF){
				ncycle=true;
			}
		}
	}
}
int main(){
	int t,tmp1,tmp2,tmp3;
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=0;i<v;i++){
			edge[i].clear();
			weight[i].clear();
		}
		dis[0]=0;
		ncycle=false;
		for(int i=1;i<v;i++){
			dis[i]=INF;
		}
		for(int i=0;i<e;i++){
			cin>>tmp1>>tmp2>>tmp3;
			edge[tmp1].pb(tmp2);
			weight[tmp1].pb(tmp3);
		}
		bellman();
		if(ncycle)cout<<"Pak Dengklek tidak mau pulang\n";
		else if(dis[v-1]==INF)cout<<"Tidak ada jalan\n";
		else cout<<dis[v-1]<<endl;
	}
		
}
