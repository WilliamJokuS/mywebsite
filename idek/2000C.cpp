#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,x,idx=0;
		map<int,int> mp;
		cin>>n;
		int b[n+5];
		vector<int> a[n+5];
		for(int i=0;i<n;i++){
			cin>>x;
			b[i+1]=x;
			if(mp.find(x)!=mp.end())a[mp[x]].push_back(i);
			else{
				idx++;
				mp[x]=idx;
				a[idx].push_back(i);
			}
		}
		int q;cin>>q;
		while(q--){
			string s;
			cin>>s;
			if(s.size()!=n){
				cout<<"NO\n";
				continue;
			}
			bool ans=true;
			bool done[26];
			memset(done,false,sizeof done);
			//for(int j=1;j<=n;j++)cout<<mp[b[j]]<<endl;
			for(int j=1;j<=idx;j++){
				//for(int k=0;k<a[j].size();k++)cout<<j<<" "<<a[j][k]<<endl;
				for(int k=0;k<a[j].size()-1;k++){
					if(s[a[j][k]]!=s[a[j][k+1]]){
						ans=false;
					}
				}
				int curr=s[a[j][0]]-'a';
				if(done[curr])ans=false;
				done[curr]=true;
			}
			if(ans)cout<<"YES\n";
			else cout<<"NO\n";
		}
	}
}
