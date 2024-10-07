#include <bits/stdc++.h>
using namespace std;
int p[2005];
int find(int x){
	if(x==-1)return 1;
	return find(p[x])+1;
}
int main(){
	int n,ans=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		ans=max(ans,find(p[i]));
	}
	cout<<ans<<endl;
}
