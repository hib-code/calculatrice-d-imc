#include <stdio.h>

int main() {

    float poids, taille, imc;
    char continuer;

    do {

        printf("Entrez votre poids en kilogrammes : ");
        scanf("%f", &poids);

        printf("Entrez votre taille en m�tres : ");
        scanf("%f", &taille);


        imc = poids / (taille * taille);


        printf("Votre indice de masse corporelle (IMC) est : %.2f\n", imc);


        if (imc < 18.5) {
            printf("Cat�gorie : Insuffisance pond�rale\n");
        } else if (imc >= 18.5 && imc < 24.9) {
            printf("Cat�gorie : Poids normal\n");
        } else if (imc >= 25 && imc < 29.9) {
            printf("Cat�gorie : Surpoids\n");
        } else if (imc >= 30 && imc < 34.9) {
            printf("Cat�gorie : Ob�sit� de classe 1\n");
        } else if (imc >= 35 && imc < 39.9) {
            printf("Cat�gorie : Ob�sit� de classe 2\n");
        } else {
            printf("Cat�gorie : Ob�sit� de classe 3\n");
        }

        printf("\nVoulez-vous calculer l'IMC pour une autre personne ? (O/N) ");
        scanf(" %c", &continuer);

    } while (continuer == 'O' || continuer == 'o');

    printf("Au revoir !\n");

    return 0;
}
