#include <bits/stdc++.h>
using namespace std;
int keep[30];
bool used[30];
int cnt,n,k;
void rec(int idx){
	if(cnt==k)return;
	if(idx>n){
		for(int i=1;i<=n;i++){
			cout<<char(keep[i]+'A');
		}
		cout<<endl;
		cnt++;
	}else{
		for(int i=0;i<n;i++){
			if(used[i])continue;
			used[i]=true;
			keep[idx]=i;
			rec(idx+1);
			used[i]=false;
		}
	}
}
int t;
int main(){
	cin>>t;
	while(t--){
		cnt=0;
		cin>>n>>k;
		rec(1);
	}
}
