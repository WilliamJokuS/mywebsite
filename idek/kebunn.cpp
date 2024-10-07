#include <bits/stdc++.h>
using namespace std;
long long a[20005];
int n;
long long x,y;
int main(){
	cin>>n;
	for(int i=0;i<2*n;i++){
		cin>>a[i];		
	}
	for(int i=0;i<2*n;i++){;
		if(a[i]*a[i+1]>x){
			x=a[i]*a[i+1];
		}
		if(a[i]+a[i+1]>y){
			y=a[i]+a[i+1];
		}
		i++;	
	}
	cout<<x<<" "<<2*y<<"\n";
}
