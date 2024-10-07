#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m,j=0,tmp,uang;
	cin>>n>>m;
	uang=m;
	bool punya[100005];
	int a[100005];
	for(int i=1;i<=n;i++){
		cin>>tmp;
		punya[tmp]=true;
	}
	for(int i=1;i*i<=10000000;i++){
		if(punya[i]==false&&uang>=i){
			uang-=i;
			j++;
			a[j]=i;
		}
	}
	cout<<j<<endl;
	for(int i=1;i<=j;i++){
		if(i==j)cout<<a[i]<<endl;
		else cout<<a[i]<<" ";
	}
}
