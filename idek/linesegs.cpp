#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int> line[1000005];
bool compare(pair<int,int> a, pair<int,int> b){
	if(a.second<b.second)return true;
	else if(a.second==b.second){
		return a.first>b.first;
	}else return false;
}
int main(){
	int n;cin>>n;
	for(int i=1;i<=n;i++)cin>>line[i].first>>line[i].second;
	sort(line+1,line+1+n,compare);
	int ans=1,now=line[1].second;
	for(int i=2;i<=n;i++){
		if(now<=line[i].first){
			ans++;
			now=line[i].second;
		}
	}
	cout<<ans<<endl;
}
