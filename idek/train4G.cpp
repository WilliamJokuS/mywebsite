#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll INF=0x3f3f3f3f;
ll dist[105][105];
ll n,m,tmp1,tmp2,s,d,ans;
int main(){
	int t,nt=1;
	cin>>t;
	for(int z=1;z<=t;z++){
		memset(dist,INF,sizeof dist);
		cin>>n;
		cin>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(i==j)dist[i][j]=0;
			}
		}
		for(int i=1;i<=m;i++){
			cin>>tmp1>>tmp2;
			dist[tmp1][tmp2]=1;
			dist[tmp2][tmp1]=1;
		}
		
		for(int k=0;k<n;k++){
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
				}
			}
		}
		ans=0;
		cin>>s>>d;
		for(int i=0;i<n;i++){
			if(dist[s][i]==INF||dist[i][d]==INF)continue;
			ans=max(ans,dist[s][i]+dist[i][d]);
		}
		cout<<"Case "<<nt<<": "<<ans<<endl;
		nt++;
	}
}
