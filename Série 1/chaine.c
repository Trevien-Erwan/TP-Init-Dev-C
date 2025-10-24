#include <stdio.h>
#include <string.h>
#define STRING_SIZE 10

int FonctionCalcul(int n){
    n = n + 2;
    return n * n;
}

int main()
{
    int a = 2;
    int resultat = FonctionCalcul(a);
    printf("a = %d, le résultat est : %d\n", a,resultat);
    char c = 'A';

    char chaine[STRING_SIZE] = "AEIOUY";

    for (int i = 0 ; i < STRING_SIZE ; i++){
        printf("Le caractère numéro %i est %c.\n", i,chaine[i]);
    }
    
    printf("Ma chaîne avant : %s , sa taille = %d\n", chaine, strlen(chaine));
    chaine[3] = '\0';
    printf("Ma chaîne après : %s , sa taille = %d\n", chaine, strlen(chaine));
}