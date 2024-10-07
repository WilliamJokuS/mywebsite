#include <bits/stdc++.h>
using namespace std;
int karakter[55];
int memo[55][55];
int pnjng(int l,int r){
	if(l==r)return 1;
	if(l>r)return 0;
	if(memo[l][r]!=-1)return memo[l][r];
	if(karakter[l]==karakter[r]){
		memo[l][r] = 2 + pnjng(l+1,r-1);
		return memo[l][r];
	}
	int hkiri,hkanan;
	hkiri=pnjng(l+1,r);
	hkanan=pnjng(l,r-1);
	memo[l][r]=max(hkiri,hkanan);
	return memo[l][r];
}
int main(){
	int t;
	cin>>t;
	string s;
	for(int i=1;i<=t;i++){
		memset(memo,-1,sizeof memo);
		cin>>s;
		for(int j=0;j<s.size();j++){
			karakter[j+1]=s[j]-'a'+1;
		}
		cout<<pnjng(1,s.size());
		cout<<endl;
	}	
}
