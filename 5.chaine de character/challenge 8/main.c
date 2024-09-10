#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{  char nom [100];

    printf("entre nom:");
    scanf("%s",nom);

    printf("la chaine en miniscule :%s",strlwr(nom));
    return 0;
}
