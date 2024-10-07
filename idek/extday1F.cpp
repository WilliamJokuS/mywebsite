#include <bits/stdc++.h>
using namespace std;
int ans[105][105];
int main(){
	int n,k;
	for(int i=1;i<=100;i++){
		ans[i][1]=1;
		ans[1][i]=i;
	}
	for(int i=2;i<=100;i++){
		for(int j=2;j<=100;j++){
			ans[i][j]=(ans[i-1][j]+ans[i][j-1])%1000000;
		}
	}
//	for(int i=1;i<=100;i++){
//		for(int j=1;j<=100;j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	while(true){
		cin>>n>>k;
		if(n==0&&k==0)break;
		cout<<ans[n][k]<<endl;
	}
}
