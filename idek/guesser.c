#include <stdio.h>
int main(){
	int userInput,i=1;
	int mid,first=1,last=100;
	mid=(first+last)/2;
	printf("Pick a number(1-100)\n");
	printf("But I need you to answer some questions!\n");
	do{
		mid = (first+last)/2;
		do{
			printf("%d.%d ?(1 = correct,2 = too low,3 = too high)",i,mid);
			scanf("%d",&userInput);
//		}while(userInput!=1 && userInput!=2 && userInput!=3);
		}while(userInput>3 || userInput<1 );
		if(userInput==2){
			first=mid+1;
		}else if(userInput==3){
			last=mid-1;
		}else if(userInput==1){
			printf("Thank you");
		}
		i++;
	}while(userInput!=1);
}
