#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom[100];

    printf(" le nom:");
    scanf("%s",nom);
    printf("l'inversse de la chain est :%s",strrev(nom));
    return 0;
}
