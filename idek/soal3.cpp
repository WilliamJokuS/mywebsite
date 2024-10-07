#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mutlak(ll x){
	if(x<0)return -x;
}
void merge(int arr[], int l, int m, int r){ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
    i = 0; 
    j = 0; 
    k = l;
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]){ 
            arr[k] = L[i]; 
            i++; 
        } 
        else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2){ 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r){ 
    if (l < r){ 
        int m = l+(r-l)/2;  
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
} 
int main(){
	ll k,n,nilai=0;
	ll idx=0;
	cin>>n>>k;
	int a[n+3];
	int sub[n+3];
	for(int i=0;i<n;i++){
		cin>>a[i];
		sub[i]=0;
	}
	mergeSort(a,0,n-1);
	
	if(k%2==0){
		for(int i=0;i<k/2;i++){
			sub[idx]=a[i];
			idx++;
		}
	}else{
		for(int i=0;i<k/2+1;i++){
			sub[idx]=a[i];
			idx++;
		}
	}
	for(int i=n-1;i>=n-(k/2);i--){
		sub[idx]=a[i];
		idx++;
	}
	if(k==1){
		nilai=0;
	}else{
		for(int i=0;i<k;i++){
			for(int j=i+1;j<k;j++){
				nilai+=mutlak(sub[i]-sub[j]);
			}
		}
	}
	cout<<nilai<<endl;
	return 0;
}
