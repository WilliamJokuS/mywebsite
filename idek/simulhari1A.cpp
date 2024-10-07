#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,m,k,p,tot=0;
pair<int,int>card[100005];
int b[100005];
int x[100005];
int main(){
	cin>>n>>m>>k>>p;
	for(int i=1;i<=n;i++){
		cin>>card[i].first;
	}
	for(int i=1;i<=n;i++){
		cin>>card[i].second;
	}
	sort(card+1,card+1+n);
	for(int i=1;i<=m;i++){
		cin>>b[i];
	}
	for(int i=1;i<=m;i++){
		cin>>x[i];
	}
	for(int i=n;i>=n-k+1;i--){
		tot+=card[i].first;
	}
	cout<<tot<<endl;
	if(p==1){
		for(int i=n-k+1;i<=n;i++){
			cout<<i;
			if(i<n)cout<<" ";
		}
		cout<<endl;
	}
}
