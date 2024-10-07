#include <bits/stdc++.h>
using namespace std;
int t,n,sz;
string s;
map <string,int> maps;
string a[100005];
void solve(){
	maps.clear();
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maps[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		bool ans=false;
		for(int j=0;j<a[i].size()-1;j++){
			string tmp1="",tmp2="";
			for(int k=0;k<=j;k++){
				tmp1=tmp1+a[i][k];
			}
			for(int k=j+1;k<a[i].size();k++){
				tmp2=tmp2+a[i][k];
			}
			//cout<<tmp1<<" "<<tmp2<<endl;
			if(maps.find(tmp1)!=maps.end()&&maps.find(tmp2)!=maps.end())ans=true;
		}
		cout<<ans;
	}
	cout<<endl;
}
int main(){
	cin>>t;
	while(t--){
		solve();
	}
}
