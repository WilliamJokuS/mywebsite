#include <iostream>
#include <cstring>
int main(){
	char nama[5][30]={"Budi","Charlie","Dodi","Edi","Adi"};
	int i,j,pos,n=5;
	char temp[30];
	for (i=0;i<n;i++){
		pos=i; 
		while((pos>0)&&(strcmp(nama[pos],nama[pos-1])<0)){
			strcpy(temp,nama[pos]);
			strcpy(nama[pos],nama[pos-1]);
			strcpy(nama[pos-1],temp);
			pos--;
		}  
	}
	for(i=0;i<n;i++){
		printf("%s\n",nama[i]);
	}
}
