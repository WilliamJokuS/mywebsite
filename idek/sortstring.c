#include <stdio.h>
#include <string.h>
int main(){
	int i,j;
	char curr[30];
	char h[4][15]={"Anton","Charlie","dodi","Budi"};
	for (i=0;i<4-1;i++){
		for (j=i;j<4;j++){
			if(strcmp(h[i],h[j])>0){
				strcpy(curr,h[i]);
				strcpy(h[i],h[j]);
				strcpy(h[j],curr);
			}
		}
	}
	for(i=0;i<4;i++){
		printf("%s ",h[i]);
	}
}

