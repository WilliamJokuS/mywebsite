#include <stdio.h>
#include <time.h>
#include <stdbool.h>
int bil[10];
int main(){
	int i, randNumber, userGuess, guessCount = 1;
	bool valid = true;
    srand (time(NULL)); 
    randNumber = (rand() % 100) + 1;
	do{
		do{
			valid=true;
			printf("%d. Guess the number(1-100): ",guessCount);
			scanf("%d",&userGuess);
			if(userGuess<1 || userGuess>100){
				valid = false;
			}
			for(i=0;i<=9;i++){
				if(bil[i]==userGuess){
					valid=false;
					break;
				}
			}
			if(!valid){
				printf("Invalid\n");
			}		
		}while(!valid);
		bil[guessCount-1]=userGuess;
		if(userGuess<randNumber){
			printf("Too Low\n");
		}else if(userGuess>randNumber){
			printf("Too High\n");
		}else{
			printf("Congratulations!");
			break;
		}
		guessCount++;
	}while(guessCount<11);
	if(guessCount==11){
		printf("Game Over\n");
		printf("%d",randNumber);
		
	}
}
