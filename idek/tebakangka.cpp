#include <stdio.h>
#include <time.h>
int main(){
	int randNumber, userGuess, guessCount = 1;
    srand (time(NULL)); // generate seed 
    randNumber = (rand() % 100) + 1;  
	do{
		printf("%d. Guess the number(1-100)",guessCount);
		scanf("%d",&userGuess);
		if(userGuess<randNumber){
			printf("Too Low");
		}else if(userGuess>randNumber){
			printf("Too High");
		}else{
			printf("Congratulations!");
			break;
		}
		guessCount++;
	}while(guessCount<11)
}
