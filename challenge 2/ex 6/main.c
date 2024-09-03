#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,produit;
    int facteur;
    printf("Donnez le nombre des elements du tableau:");
    scanf("%d",&n);
    printf("Donnez le nombre des facteure :");
    scanf("%d",&facteur);
    int t[n];
     produit=1;
    for(i=0;i<n;i++)
    {
       printf("Donnez l'element %d:",i+1);
       scanf("%d",&t[i]);
       t[i] = t[i]*facteur;

    }
for(i=0;i<n;i++)
    {
printf("Le produit est: %d\n",t[i]);
    }




    return 0;

}
