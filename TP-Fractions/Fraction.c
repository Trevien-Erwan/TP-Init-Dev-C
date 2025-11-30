#include <stdio.h>
#include "Fraction.h"
#include <stdlib.h>
#include "OutilsMaths.h"

Fraction Creer_Frac (int a, int b) {

    if (b == 0) {
        printf("ERREUR dénominateur à 0 dans Creer_Frac \n");
        exit(1);
    }

    Fraction frac; 
    frac.numerateur = a;
    frac.denominateur = b;
    return frac;
}

Fraction Saisie1_Frac() {
    Fraction frac;
    do {
        printf("Saisir une fraction sous la forme a/b, a et b entiers, b ≠ 0 :\n");
        scanf("%d/%d", &frac.numerateur, &frac.denominateur);

        if (frac.denominateur == 0) {
            printf("Attention dénominateur à 0, recommencez !\n");
        }
    } while(frac.denominateur == 0);

    return frac;
}

void Saisie2_Frac(Fraction * frac) {
    //*fraction = Saisie1_Frac();
    do {
        printf("Saisir une fraction sous la forme a/b, a et b entiers, b != 0 :\n");
        scanf("%d/%d", &frac->numerateur, &frac->denominateur);

        if (frac->denominateur == 0) {
            printf("Attention denominateur a 0, recommencez !\n");
        }
    } while(frac->denominateur == 0);
}


void Affich_Frac(Fraction frac) {
    printf("Fraction : %d/%d\n",frac.numerateur, frac.denominateur);
}


void Reduire_Frac(Fraction * frac) {
    int p = pgcd(frac->numerateur, frac->denominateur);
    frac->numerateur /= p;
    frac->denominateur /= p;
}

Fraction Produit_Frac(Fraction f_a, Fraction f_b) {
    Fraction resultat;

    resultat.numerateur = f_a.numerateur * f_b.numerateur;
    resultat.denominateur = f_a.denominateur * f_b.denominateur;

    Reduire_Frac(&resultat);

    return resultat;
}

Fraction Somme_Frac(Fraction f_a,Fraction f_b) {
    Fraction resultat;

    if (f_a.denominateur == f_b.denominateur){
        resultat.numerateur = f_a.numerateur + f_b.numerateur;
        resultat.denominateur = f_a.denominateur;
    } else {
        resultat.numerateur = f_a.numerateur * f_b.denominateur + f_b.numerateur * f_a.denominateur;
        resultat.denominateur = f_a.denominateur * f_b.denominateur;
    }

    Reduire_Frac(&resultat);

    return resultat;
}

Fraction Inverse_Frac(Fraction frac){
    return Creer_Frac(frac.denominateur, frac.numerateur);
}

Fraction Division_Frac(Fraction f_a, Fraction f_b){
    Fraction resultat = Produit_Frac(f_a, Inverse_Frac(f_b));
    Reduire_Frac(&resultat);
    return resultat;
}