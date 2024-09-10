#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{ char nom[100];
char prenom[100];

 printf(" le nom:");
 scanf("%s",nom);
 printf("le prenom :");
 scanf("%s",prenom);

 printf("le resultat :%s",strcat(nom,prenom));



    return 0;
}
