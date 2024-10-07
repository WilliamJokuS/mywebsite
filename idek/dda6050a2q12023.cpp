#include <bits/stdc++.h>
using namespace std;
//map<int,int> mp;
int f(int x){
	if(x==1)return 0;
//	if(mp.find(x)!=mp.end())return mp[x];
//	else{
//		if(x%2==0)return mp[x]=f(x/2)+1;
//		else return mp[x]=f(3*x+1)+1;
//	}
	if(x%2==0)return f(x/2)+1;
	else return f(3*x+1)+1;
}
bool compare(pair<int,int> a, pair<int,int> b){
	if(a.first==b.first)return a.second<b.second;
	else return a.first<b.first;
}
int main(){
	int x,y,i,len=0;
	cin>>x>>y>>i;
	pair<int,int> a[10005];
	for(int idx=x;idx<=y;idx++){
		len++;
		a[len]={f(idx),idx};
	}
	sort(a+1,a+len+1,compare);
//	for(int idx=1;idx<=len;idx++){
//		cout<<a[idx].first<<" "<<a[idx].second<<endl;
//	}
	cout<<a[i].second<<endl;
}
