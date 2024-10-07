#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,tmp,cnt=0,tnow=0;
	cin>>n;
	pair <int,int> time[n+5];
	for(int i=0;i<n;i++){
		cin>>time[i].second>>tmp;
		time[i].first=time[i].second+tmp;
	}
	sort(time,time+n);
	for(int i=0;i<n;i++){
		if(time[i].second>=tnow){
			cnt++;
			tnow=time[i].first;
		}
	}
	cout<<cnt<<endl;
}
