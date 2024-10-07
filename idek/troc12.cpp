#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
void merge(ll arr[],int l,int m, int r){ 
    int i, j, k;
    int n1=m-l+1; 
    int n2=r-m; 
    int L[n1], R[n2]; 
    for (int i=0;i<n1;i++) 
        L[i]=arr[l+i]; 
    for (int j=0;j<n2;j++) 
        R[j]=arr[m+1+j]; 
    i=0;
    j=0; 
    k=l; 
    while (i<n1&&j<n2){ 
        if (L[i]<=R[j]){ 
            arr[k]=L[i]; 
            i++; 
        }else{ 
            arr[k]=R[j]; 
            j++; 
        } 
        k++; 
    }
	while(i<n1){ 
        arr[k]=L[i]; 
        i++; 
        k++; 
    } 
    while(j<n2){ 
        arr[k]=R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(ll arr[], int l, int r){ 
    if (l<r){ 
        int m = l+(r-l)/2; 
  	    mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
        merge(arr, l, m, r); 
    } 
}
int main(){
	ll n,m;
	ll a[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	mergeSort(a,1,n);
	ll min=10000000000;
	for(int i=n;i>=m;i--){
		if(min>a[i]-a[i-m+1]){
			min=a[i]-a[i-m+1];
		}
	}
	cout<<min<<endl;
}
