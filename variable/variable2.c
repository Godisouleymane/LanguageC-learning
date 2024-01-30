#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int nombreDeVies = 5;
	printf("Vous avez %d vies\n", nombreDeVies);
	printf("***** B A M *****\n");
	nombreDeVies = 4;
	printf("Il ne vous reste plus que %d vies maintenant\n\n", nombreDeVies);
	return 0;
}

