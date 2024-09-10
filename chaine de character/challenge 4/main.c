#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char nom[100];
    char prenom[100];

    printf(" le nom:");
    scanf("%s",nom);
    printf("le prenom :");
    scanf("%s",prenom);
    if(strcmp(nom,prenom)==0)
        printf("les deux chaine est eguales");
    else
        printf("les deux chaine differentes");

    return 0;
}
