#include <bits/stdc++.h>
using namespace std;
int n;
int a[2005],b[2005];
bool graf[2005][2005];
bool visited[2005];
int sum;
void dfs(int x){
	sum+=b[x];
	visited[x]=true;
	for(int i=1;i<=n;i++){
		if(graf[x][i]==false||visited[i]==true)continue;
		dfs(i);
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]^a[j]>max(a[i],a[j]))graf[i][j]=true;
		//	cout<<graf[i][j]<<" ";
		}
		//cout<<endl;
	}
	for(int i=1;i<=n;i++){
		sum=0;
		memset(visited,false,sizeof visited);
		dfs(i);
		cout<<sum<<endl;
	}
}
