#include <bits/stdc++.h>
using namespace std;
int ans=1,diff;
int  a[50005];
int sz=0;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s,tmp,d;
	getline(cin,s);
	cin>>d;
	diff=atoi(d.c_str());
	//cout<<diff<<endl;
	for(int i=0;i<=s.size();i++){
		if(i==s.size()||s[i]==' '){
			sz++;
			int x=atoi(tmp.c_str());
			a[sz]=x;
			tmp="";
//			cout<<x<<endl;
		}else tmp=tmp+s[i];
	}
	map<int,int> dp;
	for(int i=1;i<=sz;i++){
		dp[a[i]]=max(dp[a[i]],dp[a[i]-diff]+1);
		ans=max(ans,dp[a[i]]);
	}
	cout<<ans<<endl;
}
