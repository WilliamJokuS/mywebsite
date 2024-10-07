#include <bits/stdc++.h>
using namespace std;
vector<int> output;
string out;
int a[105];
void merge(int arr[],int l, int mid, int r){
	int sz_l=mid-l+1;
	int sz_r=r-mid;
	int L[sz_l];
	int R[sz_r];
	for(int i=0;i<sz_l;i++){
		L[i]=arr[l+i];
	}
	for(int i=0;i<sz_l;i++){
		L[i]=arr[l+i];
	}
	for(int i=0;i<sz_r;i++){
		R[i]=arr[mid+1+i];
	}
	int idx_l=0,idx_r=0,idx_arr=l;
	while(idx_l<sz_l&&idx_r<sz_r){
		if(L[idx_l]<=R[idx_r]){
			arr[idx_arr]=L[idx_l];
			idx_l++;
		}else{
			arr[idx_arr]=R[idx_r];
			idx_r++;
		}
		idx_arr++;
	}
	while(idx_l<sz_l){
		arr[idx_arr]=L[idx_l];
		idx_l++;
		idx_arr++;
	}
	while(idx_r<sz_r){
		arr[idx_arr]=R[idx_r];
		idx_r++;
		idx_arr++;
	}
}
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int mid=(l+r)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
void pola(int x){
	if(x==0)return;
	pola(x-1);
	cout<<x;
	pola(x-1);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	mergeSort(a,0,n-1);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";
}

