#include <bits/stdc++.h>
using namespace std;
int MOD=998244353;
int memo[1005];
int fibo(int x){
	if(x==1||x==0)return 1;
	else if(memo[x]!=-1)return memo[x];
	else return memo[x]=(fibo(x-1)+fibo(x-2))%MOD;
}
int main(){
	memset(memo,-1,sizeof memo);
	int n;
	cin>>n;
	//for(int i=1;i<=50;i++)cout<<fibo(i)<<endl;
	cout<<fibo(n)<<endl
}

