#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD=1e9+7;
ll sum=0,na=0,nb=0;
ll memo[1000005];
ll gen(int x){
	if(x==0)return 1;
	else if(x==1)return 2;
	else if(memo[x]!=0)return memo[x];
	if(x%2==0)return memo[x]=(gen(x/2)*gen(x/2))%MOD;
	else return memo[x]=(gen(x/2)*gen(x/2)*2)%MOD;
}
int main(){
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]=='b'){
			sum+=gen(na)-1;
			sum%=MOD;
		}
		else if(s[i]='a'){
			nb=0;
			na++;
		}
	}
	cout<<sum<<endl;
}
