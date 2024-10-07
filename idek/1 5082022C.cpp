#include <bits/stdc++.h>
using namespace std;
int n;
pair<int,int> datee[5005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>datee[i].first>>datee[i].second;
	}
	sort(datee+1,datee+n+1);
	int cur;
	for(int i=1;i<=n;i++){
		if(i==1)cur=datee[i].second;
		else{
			if(cur>datee[i].second)cur=datee[i].first;
			else cur =datee[i].second;
		}
	}
	cout<<cur<<endl;
}
