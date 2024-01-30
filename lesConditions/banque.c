#include <stdio.h>
#include <stdlib.h>

int main() {

    char nom[50], email[50];  // Utilisation de tableaux pour stocker les chaînes de caractères

    int age = 0, argent = 0;

    printf("\nBienvenue sur votre espace client\n\n");

    printf("Veuillez saisir votre nom : \n");

    scanf("%s", nom);

    printf("Veuillez saisir votre email : \n");

    scanf("%s", email);

    printf("Veuillez mettre votre âge svp\n");

    scanf("%d", &age);

    if (age >= 18) {
        printf("Veuillez saisir le montant à ajouter\n");

        scanf("%d", &argent);

        if (argent >= 30000) {
            printf("Votre espace client a été créé avec succès\n Nom: %s \n Email: %s \n Age: %d \n Montant: %d", nom, email, age, argent);
        } else {
            printf("Votre montant est insuffisant");
        }
    } else {
        printf("Vous êtes mineur");
    }

    return 0;
}

