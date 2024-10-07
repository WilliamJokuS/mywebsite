#include <bits/stdc++.h>
using namespace std;
long long tmp;
string cek="welcome to code jam",s;
typedef long long ll;
ll memo[505][30];
ll dp(int idxs,int idxc){
	if(memo[idxs][idxc]!=-1)return memo[idxs][idxc];
	else if(idxc==cek.size())return memo[idxs][idxc]=1;
	else if(idxs==s.size())return memo[idxs][idxc]=0;
	if(s[idxs]==cek[idxc]){
		return memo[idxs][idxc]=(dp(idxs+1,idxc+1)+dp(idxs+1,idxc))%10000;
	}
	return memo[idxs][idxc]=dp(idxs+1,idxc)%10000;
}
int main(){
	int t;
	cin>>t;
	cin>>ws;
	for(int i=1;i<=t;i++){
		memset(memo,-1,sizeof memo);
		getline(cin,s);
		tmp=dp(0,0)%10000;
		cout<<"Case #"<<i<<": ";
		if(tmp>999)cout<<tmp<<endl;
		else if(tmp>99)cout<<"0"<<tmp<<endl;
		else if(tmp>9)cout<<"00"<<tmp<<endl;
		else cout<<"000"<<tmp<<endl;
	}
}

