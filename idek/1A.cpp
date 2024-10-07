#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
pair <int, pair<int, pair<int,string> > > peserta[85];
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n,m;
		cin>>n>>m;
		cin>>s;
		for(int i=1;i<=n;i++){
			cin>>peserta[i].se.se.se;
			cin>>peserta[i].se.se.fi;//nilai 1
			cin>>peserta[i].se.fi;// nilai 2
			cin>>peserta[i].fi;// nilai 3
		}
		
		sort(peserta+1,peserta+n+1);
		for(int i=1;i<=n;i++){
			if(peserta[i].se.se.se==s){
				if(i<=n-m)cout<<"TIDAK\n";
				else cout<<"YA\n";
				break;
			}
		}
	}
}
