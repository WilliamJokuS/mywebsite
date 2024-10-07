#include <bits/stdc++.h>
using namespace std;
int n;
int a[105];
bool eq=true;
bool inc=false;
bool dc=false;

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(i>1&&a[i]!=a[i-1])eq=false;
		if(!eq&&a[i-1]<a[i])inc=true;
		else if(!eq&&a[i-1]>a[i])dc=true;
	}
	if(eq)cout<<"EQUAL";
	else if(!inc&&dc)cout<<"NONINCREASING";
	else if(!dc&&inc)cout<<"NONDECREASING";
	else cout<<"NONE";
	cout<<"\n";
}
