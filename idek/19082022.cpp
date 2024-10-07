#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m,tmp;
bool bisa[100005];
bool fact[100005];
vector<int> ans;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	memset(bisa,true,sizeof bisa);
	memset(fact,false,sizeof fact);
	
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>tmp;
    	for(int j=2;j*j<=tmp;j++){
    		while(tmp%j==0){
    			fact[j]=true;
    			tmp/=j;
			}
		}
		if(tmp!=1)fact[tmp]=true;
	}
	for(int i=2;i<=m;i++){
		if(!fact[i])continue;
		for(int j=2*i;j<=m;j+=i){
			bisa[j]=false;
		}
	}
	ans.pb(1);
	for(int i=2;i<=m;i++){
		if(bisa[i]&&!fact[i])ans.pb(i);
	}
	cout<<ans.size()<<endl;
	for(auto i: ans){
		cout<<i<<endl;
	}
}
