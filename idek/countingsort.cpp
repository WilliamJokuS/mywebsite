#include <iostream>
#include <cstring>
int main(){
	int h[5]={3,4,1,5,2};
	int ftable[10];
	int i,j,index,x,n=5;
	for (i=0;i<n;i++){
		x=h[i];
		ftable[x]++;
	}
	index=0;
	for (i=0;i<100000;i++){
		for (j=0;j<ftable[i];j++){
			h[index]=i;
			index++;
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",h[i]);
	}
}

