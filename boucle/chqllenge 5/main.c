#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, somme;
    printf("entre un nombre :");
    scanf("%d",&n);
    somme=0;
    for(i=0;i<n;i++)
        somme = somme + i;
    printf("la somme des  %d premier nombre est : %d",n,somme);
    return 0;
}
