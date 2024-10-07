#include <stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	for(int mask=0;mask<(1<<5);mask++){
		if(mask%2==1){
			for(int i=0;i<5;i++){
				if((mask&(1<<i))>0){
					printf("%d ",arr[i]);
				}
			}
			printf("\n");
		}
	}
}
