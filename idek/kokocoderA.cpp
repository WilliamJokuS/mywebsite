#include <bits/stdc++.h>
#define pb push_back
using namespace std;
typedef long long ll;
char binx[70],biny[70];
ll n,x,y;
int main(){
	bool bisa=true;
	vector<int> ans;
	cin>>n>>x>>y;
	for(int i=1;i<=n;i++){
		binx[i]='0';
		biny[i]='0';
	}
	int idx=1;
	while(x>0){
		binx[idx]=char(x%2+'0');
		x/=2;
		idx++;
	}
	idx=1;
	while(y>0){
		biny[idx]=char(y%2+'0');
		y/=2;
		idx++;
	}
	for(int i=1;i<=n;i++){
		if(binx[i]!=biny[n-i+1])bisa=false;
		else if(binx[i]=='1')ans.pb(i);
	}
	if(bisa){
		cout<<ans.size()<<endl;
		for(int i=0;i<ans.size();i++){
			if(i>0)cout<<" ";
			cout<<ans[i];
		}
		cout<<endl;
	}else{
		cout<<-1<<endl;
	}	
}
