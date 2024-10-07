#include <bits/stdc++.h>
using namespace std;
bool boy[105],girl[105];
int tmp,b,g;
bool bisa=true;
int main(){
	int n,m;
	cin>>n>>m;
	cin>>b;
	for(int i=1;i<=b;i++){
		cin>>tmp;
		boy[tmp]=true;
	}
	cin>>g;
	for(int i=1;i<=g;i++){
		cin>>tmp;
		girl[tmp]=true;
	}
	for(int i=0;i<=n*m*100;i++){
		if(boy[i%n]||girl[i%m]){
			boy[i%n]=true,girl[i%m]=true;
		}
	}
	for(int i=0;i<n;i++){
		if(boy[i]==false){
			bisa=false;
		}
	}
	for(int i=0;i<m;i++){
		if(girl[i]==false){
			bisa=false;
		}
	}
	if(bisa)cout<<"Yes\n";
	else cout<<"No\n";
}
