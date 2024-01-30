#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int nombreDeVies = 5, niveau = 1;
	printf("Vous avez %d vies\n", nombreDeVies);
	printf("***** B A M *****\n");
	nombreDeVies = 4;
	printf("Il ne vous reste plus que %d vies maintenant, et vous etes au niveau %d", nombreDeVies, niveau);
	return 0;
}

