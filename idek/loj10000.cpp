#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int> timee[1005];
bool compare(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)cin>>timee[i].first>>timee[i].second;
	sort(timee+1,timee+1+n,compare);
	int cnt=0,end=0;
	for(int i=1;i<=n;i++){
		if(timee[i].first>=end){
			end=timee[i].second;
			cnt++;
		}
		else continue;
	}
	cout<<cnt<<endl;
}
