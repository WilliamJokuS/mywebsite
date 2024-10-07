#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[100005];
ll memo[50005];
stack <int> st;

ll MOD=12345678910;
ll pow2(int x){
	if(x==0)return memo[x]=1;
	else if(memo[x]!=-1)return memo[x];
	else return memo[x]=(pow2(x-1)*2)%MOD;
}
int main(){
	memset(memo,-1,sizeof memo);
	cin>>n;
	ll ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==0)st.push(0);
		if(a[i]==1&&a[i-1]==0){
			st.pop();
			ans+=pow2(st.size());
			ans%=MOD;
		}else if(a[i]==1&&a[i-1]==1)st.pop();
		
	}
	cout<<ans<<endl;
}


