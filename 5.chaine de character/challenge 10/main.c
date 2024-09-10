#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char chaine[50];
    printf("Entre la chaine :");
    gets(chaine);
    char souChaine[50];

    printf("entrer la sou-chaine :");
    gets(souChaine);

    if (strcmp(chaine,souChaine)==0)
    {
        printf("la sous-chaine est presnter dans la chaine principale");
    }
    printf("la sous-chaine pas presnter dans la chaine principale ");

    return 0;
}
