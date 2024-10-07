#include <bits/stdc++.h>
using namespace std;
int a[7]={0,3,3,5,6,20};
int lower(int x){
	int l=1,r=5,mid,tmp;
	while(l<=r){
		mid=(l+r)/2;
		if(x>=a[mid]){
			l=mid+1;
			tmp=mid;
		}
		else if(x<a[mid]){
			r=mid-1;
			tmp=r;
		}else return mid;
	}
	return tmp;
}
int main(){
	int x;
	while(true){
		cin>>x;
		cout<<lower(x)<<endl;
	}
	
}
