#include<stdio.h>
#include<stdlib.h>

int main(){
	char nomEleve[50], prenomEleve[50];

	int age = 0, niveau = 0;

	printf("\nBienvenue sur la page d'inscription de Dan Kassawa School\n");

	printf("Nom de l'eleve => ");

	scanf("%s", nomEleve);

	printf("Prenom de l'eleve => ");

	scanf("%s", prenomEleve);

	printf("Age de l'eleve => \n");

	scanf("%d", &age);

	printf("Niveau de l'eleve => \n");

	scanf("%d", &niveau);

	if(niveau > 10 && niveau < 15){
		printf("Enregistrement effectuer avec success\n");
		printf("L'eleve %s %s age de %d est enregistre au niveau moyen", nomEleve, prenomEleve, age);
	} else if(niveau > 15){
		printf("L'eleve %s %s age de %d est enregistre au niveau sup", nomEleve, prenomEleve, age);
	}else {
		printf("L'eleve %s %s age de %d est enregistre au niveau primaire", nomEleve, prenomEleve, age);
	}

	return 0;
}
