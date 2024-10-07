#include <bits/stdc++.h>
using namespace std;
int maximum=INT_MAX;
int memo[55][55];
int n,l,a[55];
int cut(int l, int r){
	if(memo[l][r]!=-1)return memo[l][r];
	else{
		int ans=INT_MAX;
		for(int i=l+1;i<r;i++){
			ans=min(ans,a[r]-a[l]+cut(i,r)+cut(l,i));
		}
		if(ans==INT_MAX)ans=0;
		memo[l][r]=ans;
		return memo[l][r];
	}
}
int main(){
	while(true){
		memset(memo,-1,sizeof memo);
		cin>>l;
		if(l==0)break;
		cin>>n;
		a[0]=0; 
		a[n+1]=l;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		sort(a,a+n+2);
		cout<<"The minimum cutting is "<<cut(0,n+1)<<".\n";
	}
}
