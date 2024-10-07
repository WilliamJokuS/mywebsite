#include <bits/stdc++.h>
using namespace std;
int n,m,tmp;
vector<int> cd;
bool binser(int x){
	int l=0,r=cd.size();
	while(l<=r){
		int mid=(l+r)/2;
		if(x<cd[mid]){
			r=mid-1;
		}else if(x>cd[mid]){
			l=mid+1;
		}else return true;
	}
	return false;
}
int main(){
	
	while(true){
		int ans=0;
		cin>>n>>m;
		if(!n&&!m)break;
		for(int i=1;i<=n;i++){
			cin>>tmp;
			cd.push_back(tmp);	
		}
		for(int i=1;i<=m;i++){
			cin>>tmp;
			if(binser(tmp))ans++;
		}
		cout<<ans<<endl;
		cd.clear();
	}
}
