#include <bits/stdc++.h>
using namespace std;
string s;
int n,maxd,ans=-2;
int a[105];
int memo[105];
void dfs(int idx,int cnt){
	if(ans!=-2)return;
	if(idx==n){
		ans=cnt;
		return;
	}
	bool st=false;
	for(int i=maxd;i>=1;i--){
		if(idx+i<=n&&a[idx+i]==1){
			dfs(idx+i,cnt+1);
			st=true;
		}
	}
	if(!st)ans=-1;
	return;
}
int main(){
	cin>>n>>maxd;
	cin>>s;
	for(int i=0;i<s.size();i++){
		memo[i+1]=-1;
		a[i+1]=s[i]-'0';
	}
	dfs(1,0);
	cout<<ans<<endl;
}
