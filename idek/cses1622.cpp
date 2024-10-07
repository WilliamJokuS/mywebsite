#include <bits/stdc++.h>
using namespace std;
int n;
string s;
vector <string> ans;
void perm(int pos){
	if(pos==n-1){
		ans.push_back(s);
		return;
	}
	set<char> done;
	for(int i=pos;i<n;i++){
		if(done.find(s[i])==done.end()){
			done.insert(s[i]);
			swap(s[i],s[pos]);
			perm(pos+1);
			swap(s[i],s[pos]);	
		}
	}
}
int main(){
	cin>>s;
	n=s.size();
	sort(s.begin(),s.end());
	perm(0);
	sort(ans.begin(),ans.end());
	cout<<ans.size()<<endl;
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
}
