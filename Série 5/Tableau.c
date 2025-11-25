#include "Tableau.h"
#include <stdlib.h>
#include <stdio.h>

int * creerTableauEntier(int taille){
    if (taille < 1)
    {
        // ! Erreur : Taille invalide
        printf("ERREUR Taille tableau négative ou nulle !\n");
        exit(1);
    }

    //* malloc alloue dynamiquement un espace mémoire pour `taille` entiers
    //* Retourne un pointeur vers le début de cette zone mémoire
    return malloc(taille * sizeof(int));    
}

void libererTab(int ** tab_p){
    //* `free` libère la mémoire pointée par `*tab_p`
    free( *tab_p);
    //* Mettre le pointeur à NULL pour éviter les accès invalides
    *tab_p = NULL;
}

void afficherTab(int * tab, int taille){
    printf("[");
    for (int i = 0; i < taille - 1; i++)
    {
        printf("%d, ", tab[i]);
    }
    if (taille > 0)
    {
        printf("%d", tab[taille-1]);
    }
    printf("]");  
}