#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool grid [505][505];
ll memo[505][505];
ll V,H,n,v1,v2,h1,h2;
ll dp(ll r,ll c){
	if(r==V)return 0;
	if(r<0||c<0)return 0;
	if(memo[r][c]!=-1)return memo[r][c];
	if(!grid[r+1][c])return memo[r][c]=dp(r+1,c);
	ll cnt=1;
	ll c1=c,c2=c;
	while(grid[r+1][c1])c1--;
	while(grid[r+1][c2])c2++;
	if(c1>0)cnt+=dp(r,c1);
	if(c2<=H)cnt+=dp(r,c2);
	memo[r][c]=cnt;
	return memo[r][c];
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(memo,-1,sizeof memo);
	cin>>V>>H>>n;
	for(int i=1;i<=n;i++){
		cin>>v1>>h1>>v2>>h2;
		for(int j=v1;j<=v2;j++){
			for(int k=h1;k<=h2;k++){
				grid[j][k]=true;
			}
		}
	}
	ll maxi=0;
	for(int i=0;i<H;i++){
		maxi=max(maxi,dp(0,i));
	}
	cout<<maxi<<endl;
}
