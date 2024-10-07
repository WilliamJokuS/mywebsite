#include <bits/stdc++.h>
using namespace std;
int memo[10005][10];
int  num[10005];
int n;
int count(int col, int state){
	int ret=0;
	if(state&1)ret++;
	if(col>1&& state&2)ret++;//1 1 1
	if(col<n&& state&4)ret++;
	return ret;
}
int main(){
	int ans=0;
	cin>>n;
	memset(memo,0,sizeof memo);
	for(int i=1;i<=n;i++)cin>>num[i];
	for(int i=0;i<=3;i++){
		if(count(1,i)==num[1])memo[2][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int st=0;st<=3;st++){
			//put 
			int newState=((st<<1)&6)|1;
			if(count(i,newState)==num[i])
				memo[i+1][newState]+=memo[i][newState];
			
			//skip
			newState=((st<<1)&6)|0;
			if(count(i,newState)==num[i])
				memo[i+1][newState]+=memo[i][newState];
		}
	}	
	for(int i=0;i<=8;i++){
		ans+=memo[n][i];
	}
	cout<<ans<<endl;
}
//state
//0 = 0 0
//1 = 0 1
//2 = 1 0
//3 = 1 1
//7 = 1     1    1
///   next last cur
