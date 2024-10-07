#include <bits/stdc++.h>
using namespace std;
int t,n,sz;
int grid[105][105];
int cek(int a,int b,int c,int d){
	int sum=a+b+c+d;
	if(sum==0||sum==4)return 0;
	else if(sum==1||sum==3)return 1;
	else if(sum==2)return 2;
}
void solve(){
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++){
		string s;
		cin>>s;
		for(int j=1;j<=n;j++){
			grid[i][j]=s[i-1]-'0';
		}
	}
	if(n%2==0){
		for(int k=0;k<n/2-2;k++){
			for(int i=1;i<k;i++){
				cout<<1+k<<i+k<<" "<<1+k<<n-k<<" "<<n-k<<n-i+1-k<<" "<<n-i+1-k<<1+k<<endl;
				ans+=cek(grid[1+k][i+k],grid[1+k][n-k],grid[n-k][n-i+1-k],grid[n-i+1-k][1+k]);
			}
		}
		ans+=(grid[n/2][n/2]+grid[n/2+1][n/2+1])%2;
		ans+=(grid[n/2][n/2+1]+grid[n/2+1][n/2])%2;
	}else{
		for(int k=0;k<n/2-2;k++){
			for(int i=1;i<k;i++){
				ans+=cek(grid[1+k][i+k],grid[1+k][n-k],grid[n-k][n-i+1-k],grid[n-i+1-k][1+k]);
			}
		}
	}
	
}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
}
