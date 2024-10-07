#include <iostream>
using namespace std;
int main(){
	int a[8]={0,7,1,-10,11,3,-5,30};
	int dp[8];
	dp[1]=a[1];
	for(int i=2;i<=8;i++){
		if(dp[i-1]<0){
			dp[i]=a[i];
		}else{
			dp[i]=dp[i-1]+a[i];
		}	
	}
	int maks=dp[1];
	for(int i=1;i<8;i++){
		if(dp[i]>=maks){
			maks=dp[i];
		}
	}
	cout<<maks<<endl;
}
