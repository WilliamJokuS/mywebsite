#include <bits/stdc++.h>
using namespace std;
int arr[15]={3,7,8,10,12,14,16,17,18,19,20,21,23,25,28};
int main(){
	cout<<"Find the number ";
	cin>>target;
	
	int left=0,right= 14;
	while(left<=right){
		int mid=(left+right)/2;
		
		if(arr[mid]<target){
			left=mid+1;
		}else if(arr[mid]>target){
			right=mid-1;
		}else if(arr[mid]==target){
			cout<<mid;
			break;
		}
	}
}


