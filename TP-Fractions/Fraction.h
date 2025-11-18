#ifndef FRACTION_H
#define FRACTION_H

struct T_Fraction{
    int numerateur;
    int denominateur;
};
typedef struct T_Fraction Fraction;

/**
 * ! Faire saisir une fraction à l'utilisateur
 */
Fraction Creer_Frac (int a, int b);

/**
 * ! Affichage simple d'une fraction
 */
Fraction Saisie1_Frac();
#endif //FRACTION_H