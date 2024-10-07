#include <bits/stdc++.h>
using namespace std;
string s;
typedef long long ll;
ll memo[30][100005];//banyaknya char c di idx ke i....n
ll word[100005];
ll dp(int kar,int idx){
	if(idx>=s.size())return 0;
	if(word[idx]==kar)return memo[kar][idx]=dp(kar,idx+1)+1;
	else return memo[kar][idx]=dp(kar,idx+1);
	
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll ans=0;
	cin>>s;
	for(int i=0;i<s.size();i++){
		word[i]=s[i]-'a';
	}
	for(int i=0;i<26;i++)ans=max(ans,dp(i,0));
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			ll tmp=0;
			for(int k=0;k<s.size()-1;k++){
				if(word[k]==i)tmp+=memo[j][k+1];
			}
			ans=max(ans,tmp);
		}
	}
	cout<<ans<<endl;
}
