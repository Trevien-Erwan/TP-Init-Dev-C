#include <stdio.h>
#include "est_premier.h"

int main(){
    int n ;
    printf("Entrez un entier n : ");
    scanf("%d", &n);
    printf("Nombres pairs : \n");
    for (int i = 0; i <= n/2; i++)
    {
        printf("%d\n", i*2);
    }
    printf("================\n");
    printf("La somme des nombres impairs :\n");
    int somme = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0){
            somme += i;
        }
    }
    printf("%d\n", somme);
    printf("===============\n");
    printf("La somme des N premiers nombres impairs :\n");
    int somme2 = 0;
    int compteur = 0;
    int nb = 2;
    while (compteur < n)
    {
        if (premier(nb))
        {
            somme2 += nb;
            compteur++;
        }
        nb++;
    }
    printf("%d", somme2);
    return 0;
}