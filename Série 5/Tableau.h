#ifndef TABLEAU_H
#define TABLEAU_H

//* Déclare une fonction qui retourne un pointeur vers un tableau dynamique
int * creerTableauEntier(int taille);

//* Déclare une fonction qui libère un tableau dynamique et met le pointeur à NULL
void libererTab(int ** tab);

void afficherTab(int * tab, int taille);


#endif //TABLEAU_H