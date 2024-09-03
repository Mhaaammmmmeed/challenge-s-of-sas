#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,tab[100];

    printf("Veuillez saisir les taille  de tableau !!");
    scanf("%d",&x);


    for(i=0;i<x;i++){
    printf("Veuillez entre un tableu :");
    scanf("%d",&tab[i]);
    }
    for(i=0;i<x;i++){
    printf("les elements de tableau est : %d\n",tab[i]);
    }




    return 0;
}
