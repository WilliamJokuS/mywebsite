#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool gud[30];
int idx=-1,idxr;
string ori,s,tmp;
bool cek(int i){
	if(ori[i]=='?'&&gud[s[i]-'a']==false)return false;
	if(ori[i]!=s[i]&&ori[i]!='?')return false;
	return true;
}
int main(){
	int t;
	cin>>s>>ori>>t;
	for(int i=0;i<s.size();i++)gud[s[i]-'a']=true;
	
	for(int i=0;i<ori.size();i++){
		if(ori[i]=='*'){
			idx=i;
			break;
		}
	}
	
	while(t--){
		cin>>s;
		bool ans=true;
		if(idx==-1){
			if(s.size()!=ori.size()){
				cout<<"NO\n";
				continue;
			}
			for(int i=0;i<s.size();i++){
				if(!cek(i))ans=false;
			}
		}else{
			if(s.size()<ori.size()-1){
				cout<<"NO\n";
				continue;
			}
			for(int i=0;i<idx;i++){
				if(!cek(i))ans=false;
			}
			string tmp1=s,tmp2=ori;
			reverse(s.begin(),s.end());
			reverse(ori.begin(),ori.end());
			for(int i=0;i<s.size();i++){
				if(ori[i]=='*')break;
				if(!cek(i))ans=false;
			}
			idxr=s.size()-(ori.size()-idx);
			s=tmp1,ori=tmp2;
			for(int i=idx;i<=idxr;i++){
				if(gud[s[i]-'a'])ans=false;
			}
		}
		if(ans)cout<<"YES\n";
		else cout<<"NO\n";
	}
}
