#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
struct work{
	ll st,en,honor;
};
bool compare(work a,work b){
	if(a.en>b.en)return false;
	else if(a.en==b.en){
		if(a.st>b.st)return false;
		else return true;
	}
}
work works[100005];
ll dp(int idx,int curt){
	if(idx>n)return 0;
	if(memo[idx][curt!=-1])return memo[idx][curt];
	memo[idx][curt]=dp(idx+1,curt);
	if(curt<=works[idx].st)memo[idx][curt]=max(memo[idx],works[idx].en)+works[idx].honor;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>works[i].st>>works[i].en>>works[i].honor;
	}
	sort(works+1,works+1+n,compare);
	cout<<dp(1,0)<<endl;
}
