#include <bits/stdc++.h>
using namespace std;

#define pb push_back

vector <int> adj[205];
int main(){
	int t,a,b,v,e;
	cin>>t;
	while(t--){
		cin>>v>>e;
		for(int i=1;i<=v;i++){
			adj[i].clear();
		}
		for(int i=1;i<=e;i++){
			cin>>a>>b;
			adj[a].pb(b);
			adj[b].pb(a);
		}
		int num0=0,num1=0;
		bool branch=0;
		for(int i=1;i<=v;i++){
			if(adj[i].size()!=1){
				if(num0==0)num0=adj[i].size();
				else if(num0==adj[i].size())branch=0;
				else if(num1==0)num1=adj[i].size();
				else branch=1;
			}
			//cout<<i<<": "<<adj[i].size()<<endl; 
		}
		if(num1==0)cout<<num0<<" "<<num0-1<<endl;
		else if(branch==1)cout<<num0<<" "<<num1-1<<endl;
		else cout<<num1<<" "<<num0-1<<endl;
	}
}


