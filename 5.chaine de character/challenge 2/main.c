#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char chaine[2];

    printf("Veuillez entre un chaine: ");
    scanf("%s",&chaine);
    strlen(chaine);
    printf("la taille de cette chaine est : %d ",strlen(chaine));

    return 0;
}
