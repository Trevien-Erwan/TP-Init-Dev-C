#include <stdio.h>
#include <stdlib.h>
#include "Tableau.h"

#define T_SIZE 50

int main() {

    // /* Tableau statique */
    // char chaine[50]; // ? Peut contenir jusqu'à 49 caractères + '\0'
    // int tab[T_SIZE];

    // for (int i = 0; i < T_SIZE; i++)
    //     tab[i] = i;

    /* Tableau dynamique demandé par l'utilisateur (1..1_000_000) */
    int taille = -1;
    while (taille < 1 || taille > 1000000)
    {
        int a = 1; // ? Variable d'exemple
        printf("Combien de cases dans le tableau ? \n");
        scanf("%d", &taille);
    }

    int * tab_dyn = creerTableauEntier(taille);
    printf("Adresse memoire du Tableau : %p. \n", tab_dyn);
    int c = 0;
    printf("Adresse memoire de la case %d : %p. \n",c, &tab_dyn[c]);
    c = 1;
    printf("Adresse memoire de la case %d : %p. \n",c, &tab_dyn[c]);
    libererTab(&tab_dyn);
    printf("Adresse memoire du Tableau : %p. \n", tab_dyn);
}