#include "Fraction.h"
#include <stdio.h>
#include <stdlib.h>

Fraction Creer_Frac (int a, int b){
    if (b == 0){
        printf("ERREUR dénominateur à 0 dans Creer_Frac \n");
        exit(1);
    };

    Fraction frac;
    frac.numerateur = a;
    frac.denominateur = b;
    return frac;
}

Fraction Saisie1_Frac() {
    Fraction frac;
    do{
        printf("Saisir une fraction sois la forme a/b, a et b entiers, b != 0 : \n");
        scanf("%d/%d", &frac.numerateur, &frac.denominateur);

        if (frac.denominateur == 0) {
            printf("Attention dénominateur à 0, recommencez !\n");
        }
    } while (frac.denominateur == 0);

    return frac;
    
}


void Affich_Frac(Fraction frac){
    printf("Fraction : %d/%d\n", frac.numerateur, frac.denominateur);
}

Fraction Produit_Fract(Fraction f_a, Fraction f_b){
    Fraction resultat;

    resultat.numerateur = f_a.numerateur * f_b.numerateur;
    resultat.denominateur = f_a.denominateur * f_b.denominateur;

    return resultat;
}