#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
ll r,c,mod=1e9+7;
ll grid[2005][2005];
ll ans[2005][2005];
bool vis[2005][2005];
void solve(){
	ans[1][1]=1;
	queue<pair<int,int>> q;
	q.push({1,1});
	while(!q.empty()){
		pair<int,int> top=q.front();
		int x=top.fi,y=top.se;
		q.pop();
		for(int i=x;i<=x+grid[x][y];i++){
			for(int j=y;j<=y+grid[x][y];j++){
				if(i==x&&j==y&&i<=r&&j<=c)continue;
				ans[i][j]+=ans[x][y];
				ans[i][j]%=mod;
				if(!vis[i][j]){
					vis[i][j]=true;
					q.push({i,j});
				}
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(vis,false,sizeof vis);
    memset(ans,0,sizeof ans);
    cin>>r>>c;
    for(int i=1;i<=r;i++){
    	for(int j=1;j<=c;j++){
    		cin>>grid[i][j];
		}
	}
	solve();
	cout<<ans[r][c]<<endl;
}


