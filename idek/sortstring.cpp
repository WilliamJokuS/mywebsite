#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char curr[30];
	char h[3][15]={"Anton","Budi","Charlie"};
	for (int i=0;i<3-1;i++){
		for (int j=i;j<3;j++){
			if(strcmp(h[i],h[j])>0){
				strcpy(curr,h[i]);
				strcpy(h[i],h[j]);
				strcpy(h[j],curr);
			}
		}
	}
	for(int i=0;i<3;i++){
		cout<<h[i]<<" ";
	}
}

