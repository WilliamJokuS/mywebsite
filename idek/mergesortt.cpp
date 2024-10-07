#include <bits/stdc++.h>
using namespace std;
long long nMax=1000;
int a[1000];
void merge(int *arr,int l, int m, int r){
	int pointl=l,pointr=m+1,idx=l;
	int tmp[nMax];
	while(pointl<=m&&pointr<=r){
		if(arr[pointl]<=arr[pointr]){
			tmp[idx]=arr[pointl];
			pointl++;
		}else{
			tmp[idx]=arr[pointr];
			pointr++;
		}
		idx++;
	}
	while(pointl<=m){
		tmp[idx]=arr[pointl];
		pointl++;
		idx++;
	}
	while(pointr<=r){
		tmp[idx]=arr[pointr];
		pointr++;
		idx++;
	}
	for(int i=l;i<=r;i++)arr[i]=tmp[i];
}
void solve(int *arr,int l, int r){
	if(l<r){
		int m=(l+r)/2;
		solve(arr,l,m);
		solve(arr,m+1,r);
		merge(arr,l,m,r);
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	solve(a,1,n);
	for(int i=1;i<=n;i++)cout<<a[i]<<" ";
}
