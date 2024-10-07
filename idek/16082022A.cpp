#include <bits/stdc++.h>
using namespace std;
int n;
int keep[10];
bool used[10];
void rec(int idx){
	if(idx>n){
		for(int i=1;i<=n;i++){
			cout<<keep[i]<<" ";
		}
		cout<<endl;
	}else{
		for(int i=1;i<=n;i++){
			if(used[i])continue;
			used[i]=true;
			keep[idx]=i;
			rec(idx+1);
			used[i]=false;
		}
	}
	
}
int main(){
	cin>>n;
	rec(1);
}
