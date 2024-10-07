#include <iostream>
using namespace std;
int prefix[10];
int main(){
	bool ada =false;
	int a[9]={0,1,4,7,8,9,3,2,5};
	prefix[0]=a[0];
	for(int i=1;i<8;i++){
		prefix[i]+=prefix[i-1];
	}
	for(int kanan=1;kanan<=9;kanan++){
		int target=prefix[kanan]-20;
		int low,mid,high;
		low=0;
		high=kanan-1;
		while(low!=high){
			mid=(low+high)/2;
			if(target>mid){
				low=mid;
			}else if(target<mid){
				high=mid;
			}else if(target==mid){
				break;
			}
		}
		if(ada==true)break;
	}
}
