#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a, pair<int,int> b){
	if (a.first-a.second!=b.first-b.second)return a.first-a.second<b.first-b.second;
    else return a.first+a.second>b.first+b.second;
}
int main(){
	int n;
	cin>>n;
	vector <pair<int, int> > points(n);
	for(int i=0;i<n;i++)cin>>points[i].first >> points[i].second;
	
	sort(points.begin(),points.end(),compare);
	int ans=0,maks=-1;
	for(int i=0;i<n;i++){
		ans+=points[i].first+points[i].second>maks;
	    maks=max(maks,points[i].first+points[i].second);
	}
	cout<<ans<<endl;
}

