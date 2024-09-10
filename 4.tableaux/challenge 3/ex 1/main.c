#include <stdio.h>
#include <stdlib.h>

int main()
{  int x,i;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&x);
   x=0;
    for(i=0;i<x;i--){
    printf("le produit de %d x %d = %d ",x,i,i*x);
           }
    return 0;
}
