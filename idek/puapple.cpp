#include <bits/stdc++.h>
using namespace std;
int memo[25][25][25];
int rec(int m,int n,int maks){
	if(maks<0||m<0)return 0;
	if(memo[m][n][maks]!=-1)return memo[m][n][maks];
	if(m==0)return memo[m][n][maks]=1;
	if(n==1){
		if(m<=maks)return memo[m][n][maks]=1;
		else return  memo[m][n][maks]=0;
	}
	int ans=0;
	for(int i=maks;i>=0;i--){
		ans+=rec(m-i,n-1,i);
	}
	return memo[m][n][maks]=ans;
}

int main(){
	int t,n,m,maks;
	memset(memo,-1,sizeof memo);
	cin>>t;
	while(t--){
		cin>>m>>n;
		cout<<rec(m,n,m)<<endl;
	}
	
}
