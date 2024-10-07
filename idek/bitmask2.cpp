#include <stdio.h>
int main(){
	int counter=0;
	for(int mask=0;mask<(1<<4);mask++){
		int buka=0;
		bool valid=true;
		for(int i=0;i<4;i++){
			if((mask&(1<<i))==0){
				buka++;
			}else{
				if(buka>0){
					buka--;
				}else{
					valid=false;
					break;
				}
			}
		}
		if(buka==0 &&valid==true)counter++;
	}
	printf("%d\n",counter);
}
