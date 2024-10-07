#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second
using namespace std;
typedef long long ll;
string s;
void dp(int idxs,int idxc,int sump,int sumc){
	sumc+=s[idxc]-'0';
	if(idxc==s.size()-1){
		for(int i=idxs;i<=idxc;i++)cout<<s[i];
		if(sumc<=sump)cout<<"Salah\n";
		else cout<<"\n";
		return;
	}
	
	
	dp(idxs,idxc+1,sump,sumc);
	if(sumc>sump){
		for(int i=idxs;i<=idxc;i++)cout<<s[i];
		cout<<" ";
		dp(idxc+1,idxc+1,sumc,0);
	}
	
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    dp(0,0,0,0);
}


