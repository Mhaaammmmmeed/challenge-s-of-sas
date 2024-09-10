#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nom[20];
    char prenom[20];
    int age;

} personne ;

int main()
{
    personne personne1;
    printf("Entre le nom du personne : ");
    scanf("%s",personne1.nom);
    printf("Entre le prenome du personne : ");
    scanf("%s",personne1.prenom);
    printf("Entre l'age du personne : ");
    scanf("%d",&personne1.age);


    printf("le nome du personne : %s \n",personne1.nom);
    printf("le prenome du personne : %s \n",personne1.prenom);
    printf("le prenome du personne : %d \n",personne1.age);
    return 0;
}
