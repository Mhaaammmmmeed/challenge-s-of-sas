#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,som;
    printf("Donnez le nombre des elements du tableau:");
    scanf("%d",&n);

    int tab[n];

    for(i=0;i<n;i++)
    {
       printf("Donnez l'element :");
       scanf("%d",&tab[i]);
    }

    som=0;
    for(i=0;i<n;i++){
       som=som+tab[i];
    }

    printf("La somme est: %d\n",som);
    return 0;
}



