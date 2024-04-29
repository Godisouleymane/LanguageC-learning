#include<stdio.h>
#include<stdlib.h>

int main(){

	int choixMenu;

	printf("=== Menu ===\n\n");
	printf("1. Royal Cheese\n");
	printf("2. Mc Deluxe\n");
	printf("3. Mc Bacon\n");
	printf("4. Big Mac\n");

	printf("Veuillez saisir un numero du menu a commander\n");
	scanf("%d", &choixMenu);

	switch(choixMenu){

	case 1:
	printf("Tu as choisi le menu Royal Cheese\n");
	break;
	
	case 2:
	printf("Tu as choisi le menu Mc Deluxe\n");
	break;

	case 3: 
	printf("Tu as choisi le menu Mc Bacon");
	break;

	case 4: 
	printf("Tu as choisi le menu Big Mac\n");
	break;
	default:
	printf("Le menu choisi n'existe pas!");	
}
	return 0;

}
