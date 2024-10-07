#include <bits/stdc++.h>
using namespace std;
int n;
int keep[20];
bool used[20];
int primes[]={2,3,5,7,11,13,17,19,23,29,31};
bool isprime[50];
void rec(int idx){
	if(idx>n){
		for(int i=1;i<=n;i++){
			if(i==n)cout<<keep[i]<<endl;
			else cout<<keep[i]<<" ";
		}
	}else{
		for(int i=1;i<=n;i++){
			if(used[i])continue;
			if(isprime[i+keep[idx-1]]==false)continue;
			if(idx==n&&isprime[i+1]==false)continue;
			used[i]=true;
			keep[idx]=i;
			rec(idx+1);
			used[i]=false;
		}
	}
	
}
int main(){
	for(int i=0;i<11;i++){
		isprime[primes[i]]=true;
	}
	int tc=1;
	while(cin>>n){
		if(tc>1)cout<<endl;
		cout<<"Case "<<tc++<<":\n";
		keep[1]=1;
		used[1]=true;
		rec(2);
	}
	
}
