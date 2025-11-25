/*
dans un fihcier .h on met 
    - définition de fonctions
    - constantes
    - structures / types
    - commentaires de documentation
    - on include un fichier.c dans un .h

dans un fichier .c
    - code --> implémenter les fonctions

dans un fichier principal main
    - on include un fichier .h dans le main
    
*/

#include <stdio.h>
#include "Fraction.h"

int main() {

    printf("===== TP FRACTION ===== \n");

    Fraction fraction = Saisie1_Frac();
    Fraction f2 , res;

    Saisie2_Frac(&f2);

    res = Produit_Frac(fraction, f2);
    printf("Resultat produit :\n");
    Affich_Frac(res);

    res = Somme_Frac(fraction, f2);
    printf("Resultat addition :\n");
    Affich_Frac(res);

    return 0;
}