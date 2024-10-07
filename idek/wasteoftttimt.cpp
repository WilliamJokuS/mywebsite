#include <bits/stdc++.h>
using namespace std;
int cek(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	int n,cnt=0;
	cin>>n;
	int curr=2;
	while(cnt<n){
		if(cek(curr)){
			cout<<curr<<" ";
			cnt++;
		}
		curr++;
	}
}

