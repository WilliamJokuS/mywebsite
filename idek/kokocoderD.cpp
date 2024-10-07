#include <bits/stdc++.h>
using namespace std;
int keep1[105];
int keep2[105];
int memo[105];
int ans=0,n,m;
void rec2(int idx){
	if(idx>m){
		memo[keep2[1]]++;
	}else{
		for(int i=keep2[idx-1];i<=n;i++){
			keep2[idx]=i;
			rec2(idx+1);
		}
	}
	
}
void rec1(int idx){
	if(idx>m){
		for(int i=keep1[m];i<=n;i++){
			if(memo[i]==-1){
				memo[i]=0;
				keep2[1]=i;
				rec2(2);
			}
			ans+=memo[i];
		}
	}else{
		for(int i=keep1[idx-1];i<=n;i++){
			keep1[idx]=i;
			rec1(idx+1);
		}
	}	
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		keep1[1]=i;
		rec1(2);
	}
	cout<<ans<<endl;
}
