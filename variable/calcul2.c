#include<stdio.h>
#include<stdlib.h>
int main()
{
	int resultat, nombre1 = 0, nombre2 =0;

	// demander le premier nombre a l'utilisateur;

	printf("Veullez saisir le premier nombre svp : ");

	scanf("%d", &nombre1);

	// demander le deusieme nombre  a l'utilisateur;

	printf("Veuillez saisir le deusieme nombre svp :");

	scanf("%d", &nombre2);

	// on fait le calcul;

	resultat = nombre1 + nombre2;
	
	// on affiche les resultat;	
	printf("Le resultat du %d + %d = %d\n",nombre1, nombre2, resultat);

	return 0;
}
