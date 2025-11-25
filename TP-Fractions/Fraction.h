#ifndef FRACTION_H
#define FRACTION_H

struct T_Fraction
{
    int numerateur;
    int denominateur;
};
typedef struct T_Fraction Fraction;

/**
 * Creer une fraction à partir de deux entiers a et b.
 * b non nul.
 */
Fraction Creer_Frac (int a, int b);

/**
 * Faire saisir une fraction à l'utilisateur
 */
Fraction Saisie1_Frac();

void Saisie2_Frac(Fraction * frac);

/**
 * Affichage simple d'une fraction
 */
void Affich_Frac(Fraction frac);

void Reduire_Frac(Fraction * frac);

Fraction Produit_Frac(Fraction f_a, Fraction f_b);

Fraction Somme_Frac(Fraction f_a,Fraction f_b);

#endif //FRACTION_H