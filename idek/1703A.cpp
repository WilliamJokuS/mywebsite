#include <bits/stdc++.h>
using namespace std;
int t,n;
string s;
bool done[26];
void solve(){
	for(int i=0;i<s.size();i++){
		if(done[s[i]])ans++;
		else{
			done[s[i]]=true;
			ans+=2;
		}
	}
	cout<<ans<<endl;
}
int main(){
	cin>>t;
	while(t--){
		cin>>s;
		memset(done,false,sizeof done);
		solve();
	}
}
