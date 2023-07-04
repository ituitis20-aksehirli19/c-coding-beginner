#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
	int player1 = 0;
	int player2 = 0;
	int score = 0;

	printf("0-0\n");

	do{
	printf("Point: ");
	scanf("%d", &score );
	
	if(score == 1){
		if(player1 < 30){
		player1 = player1 + 15;
		}
		else{
		player1 = player1 + 10;
		}
	}
	if(score == 2){
		if(player2 < 30){
		player2 = player2 + 15;
		}
		else{
		player2 = player2 + 10;
		}
	}

	if(player1 >= 40 && player2 >= 40 && (player1 == player2)){
		printf("DEUCE\n");
	}

	else if (player1 >= 40 && (player1 < player2)){
		printf("ADVANTAGE : PLAYER2\n");	
	}
   	else if (player2 >= 40 && (player2 < player1)){
		printf("ADVANTAGE : PLAYER1\n");	
	}
	else{
		printf("%d-%d\n",player1, player2);
	}
 	}while(!((abs(player2 - player1) >= 20) && (player1 > 40 || player2 > 40)));


	if(player1 < player2){
		printf("GAME : PLAYER2\n");
	}
	else{
		printf("GAME : PLAYER1\n");
	}

	return 0;
			
}
