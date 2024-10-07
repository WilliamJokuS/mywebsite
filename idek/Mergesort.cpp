#include <bits/stdc++.h>
using namespace std;

void merge(int *a, int l, int m, int r) {  
    int szl=m-l+1; 
    int szr=r-m; 
    int L[szl], R[szr]; 
    for(int i=0;i<szl;i++)L[i]=a[l+i]; 
    for(int i=0;i<szr;i++)R[i]=a[m+1+i]; 
    int idxl=0,idxr=0,idxa=l;  
    while(idxl<szl&&idxr<szr){ 
        if(L[idxl]<=R[idxr]){ 
            a[idxa]=L[idxl]; 
            idxa++;
			idxl++; 
        }else{ 
            a[idxa] = R[idxr]; 
            idxa++;
			idxr++; 
        } 
    } 
    while(idxl<szl){ 
        a[idxa]=L[idxl]; 
        idxl++; 
        idxa++; 
    } 
    while(idxr<szr){ 
        a[idxa]=R[idxr]; 
        idxr++; 
        idxa++; 
    } 
} 
void mergeSort(int *a, int l, int r) { 
    if(l<r){ 
        int m=(l+r)/2;
        mergeSort(a,l,m); 
        mergeSort(a,m+1,r); 
        merge(a,l,m,r); 
    } 
}
int main(){
	int n;
	cin>>n;
	int a[n+3];
	for(int i=1;i<=n;i++)cin>>a[i];
	mergeSort(a,1,n);
	for(int i=1;i<=n;i++)cout<<a[i]<<endl;
	return 0;
}
