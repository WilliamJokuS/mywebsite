#include <bits/stdc++.h>
using namespace std;
map<int,int> mapl;
map<int,int> mapr;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		mapl.clear(),mapr.clear();
		int a,b,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			int tmp;;
			cin>>tmp;
			if(mapr.find(tmp)!=mapr.end())mapr[tmp]=i;
			else mapl[tmp]=i,mapr[tmp]=i;
		}
//		for (auto itr = mapl.find(1); itr != mapl.end(); itr++) {
//        
//        cout << itr->first << '\t' << itr->second << '\n';
//    }	for (auto itr = mapr.find(1); itr != mapr.end(); itr++) {
//        
//        cout << itr->first << '\t' << itr->second << '\n';
//    }
		while(k--){
			cin>>a>>b;
			if(mapr.find(a)==mapr.end()||mapr.find(b)==mapr.end())cout<<"NO\n";
			else if(mapl.find(a)->second<=mapr.find(b)->second)cout<<"YES\n";
			else cout<<"NO\n";
		}
		
	}
}
