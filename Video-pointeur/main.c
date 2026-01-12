#include <stdio.h>

void creerPseudo(char *tab, char *newPseudo){
    int i;
    for (i=0; tab[i] != '\0';i++){
        tab[i] = newPseudo[i];
    }
}

int main(){

 printf("Entrez un pseudo \n");
 char pseudo[10];
 scanf("%s", &pseudo);
 int i;

 printf("\n==========\n");

  for(i=0; i != '\0' ; i++){
    printf("pseudo[%d] = %c\n", i, pseudo[i]);
 }

 char reponse;
 printf("Souhaitez vous changer de pseudo ? (y/n)");
 scanf("%c", reponse);
 if (reponse == 'y'){
    char newPseudo[10];
    printf("Entrez un pseudo :");
    scanf("%s", &newPseudo);

    creerPseudo(pseudo, newPseudo);
    printf("Nouveau Pseudo %s", pseudo);
 }
    return 0;
}