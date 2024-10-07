#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int n,m;
string s1,s2;
map <string,string> par;
vector <string> ans;
bool ans1=true;
void cek(string x,string y){
	ans.pb(y);
	if(x==y){
		reverse(ans.begin(),ans.end());
		if(ans1==false){
			for(auto i:ans){
				cout<<i<<endl;
				if(i==s1)break;
			}
		}else{
			for(auto i:ans)	cout<<i<<endl;
		}
		ans1=true;
		return;
	}
	if(par.find(y)==par.end()){
		ans1=false;
		return;
	}
	cek(x,par[y]);
	
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>s1>>s2;
		par[s2]=s1;
	}
	cin>>s1>>s2;
	cek(s1,s2);
	if(!ans1){
		cek(s2,s1);
		if(!ans1)cout<<"TIDAK MUNGKIN\n";
	}
	
}
