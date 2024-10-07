#include <bits/stdc++.h>
using namespace std;
bool udh[100005];
int memo
int beli(int sisa,int idx){
	if(idx<=0)return -100;
	else if(memo[sisa][idx]==-1){
		memo[sisa][idx]==max(beli(sisa,idx-1),beli(sisa-idx,idx-1)+1);
	}
}
int main(){
	int n,m,tmp;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>tmp;
		udh[tmp]=true;
	}
	
}
