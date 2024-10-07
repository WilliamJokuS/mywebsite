#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	string state,code;
	map<string,ll> idek;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>state>>code;
		if(state==code)continue;
		string fcode=state.substr(0,2)+code;		
		if(idek.find(fcode)==idek.end())idek[fcode]=1;
		else idek[fcode]++;
	}
	ll ans=0;
	for(auto i=idek.begin();i!=idek.end();i++){
		string key=i->first;
		string otherKey=key.substr(2,4)+key.substr(0,2);
		if(idek.find(otherKey)!=idek.end()){
			ans+=idek[key]*idek[otherKey];
			//cout<<ans<<endl;
		}
	}
	cout<<ans/2<<endl;
}
