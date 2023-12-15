#include <stdio.h>
#include <stdlib.h>

//Student: Angeline Dorvil

int main(void)
{
	printf("Welcome to the coin game!!\n");
	printf("\n");
	
	int stackCoin = 21; //initialization for the max number of coins there are in the game
	
	//storing the turns that users input, there are 2 players that will be taking turns
	int pL1 = 0;
	int pL2 = 0;
	

	
	while (stackCoin > 0) { //the goal of the game is to be the last player to empty the stack
		do { //get the user input for the amount of coin taken making sure that the amount is between 1 and 3
			printf("Player 1, please enter how many coins you want to take: ");
			scanf("%d", &pL1);
		
			if (pL1 < 1 || pL1 > 3) {
				printf("You can only take between 1 and 3 coins during each turn\n");
			}
		} while (pL1 < 1 || pL1 > 3);

		stackCoin -= pL1; //The stackCoin updates with every player's turn and track when there are no more coins on what player's turn to assign a winner
		printf("The stack has %d coins.\n", stackCoin);
		if (stackCoin <= 0){
			printf("Player 1 wins!\n");
			break;
		} 
	
		do {
			printf("Player 2, please enter how many coins you want to take: ");
			scanf("%d", &pL2);
		
			if (pL2 < 1 || pL2 > 3) {
				printf("You can only take between 1 and 3 coins during each turn\n");
			}
		} while (pL2 < 1 || pL2 > 3);
		stackCoin -= pL2; //same stackCoin update to track the winner of the game if it is player 2
		printf("The stack has %d coins.\n", stackCoin);
		if (stackCoin <= 0){
			printf("Player 2 wins!\n");
			break;
		} 
	} 


 //End of the program
  return EXIT_SUCCESS;
}
