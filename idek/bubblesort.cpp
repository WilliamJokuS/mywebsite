#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int sz){
	for(int i=0;i<sz;i++){
		for(int j=0;j<sz-1;j++){
			if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
		}
		for(int i=0;i<sz;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil array setelah sort:\n";
	for(int i=0;i<sz;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	int a[1000];
	cout<<"Masukan ukuran array: ";
	cin>>n;
	cout<<"Masukan nilai array:\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubblesort(a,n);
}


