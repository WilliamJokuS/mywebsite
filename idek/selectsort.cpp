#include <iostream>
#include <cstring>
int main(){
	char nama[5][30]={"Budi","Charlie","Dodi","Edi","Adi"};
	int i,j,min_i,n=5;
	char temp[30];
	for(i=0;i<n;i++){
		min_i=i;
		for(j=i+1;j<n;j++)
			if(strcmp(nama[i],nama[min_i]<0))
				min_i=j;
		strcpy(temp,nama[i]);
		strcpy(nama[i],nama[min_i]);
		strcpy(nama[min_i],temp);
	}
	for(i=0;i<n;i++){
		printf("%s\n",nama[i]);
	}
}
