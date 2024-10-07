#include <bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> grass[100005];
bool check(int dis){
	int now=grass[1].first;
	int cnt=0,idx=1;
	while(cnt<n){
		if(idx>m)return false;
		if(now>=grass[idx].first&&now<=grass[idx].second){
			cnt++;
			now+=dis;
		}else{
			idx++;
			if(now<=grass[idx].first)now=grass[idx].first;
		}
	}
	return true;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>grass[i].first>>grass[i].second;
	sort(grass+1,grass+1+m);
	int l=1,r=(grass[1].first+grass[m].second)/(n-1);
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}else r=mid-1;
	}
	cout<<ans<<endl;
}
