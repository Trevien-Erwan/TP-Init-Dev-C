#include <stdio.h>
#include <stdbool.h>

#define BUFFER_SIZE 10

#define END_OF_STRING '\0'

#define OK 0
#define NO_INPUT 1
#define TOO_LONG 2

int clear_stdin(){
    int ch,nbr = 0;
    while (((ch = getchar()) != '\n') && (ch != EOF))
        nbr++;
    return nbr;
}

int LireEntier(char *msg, int borne_min, int borne_max){
    int entier, retour_scanf;
    do {
        clear_stdin();
        if (msg != NULL)
            printf("%s", msg);
        retour_scanf = scanf("%d", &entier);
        if (retour_scanf = scanf !=1){
            printf("Erreur, veuillez saisir un entier.\n");
        }else if (entier < borne_min || entier > borne_max)
        {
            printf("L'entier saisit doit être compris entre %d et %d.\n", borne_min, borne_max);
        } else{
            return entier;
        }
    } while (true);
}

int getInputString(char *message, char *buffer, size_t taille){
    int extra, longueur;
    if (message != NULL)
    {
        printf("%s", message);
    }
    if (fgets(buffer, taille, stdin) == NULL)
        return NO_INPUT;
    
    longueur = strlen(buffer);

    if (longueur <= 0)
    {
        return NO_INPUT;
    }
    
if (buffer[longueur-1] == '\n')
    {
        extra = clear_stdin();
        return (extra > 0) ? TOO_LONG : OK;
    }
    buffer[longueur-1] = END_OF_STRING;
    return OK;
}