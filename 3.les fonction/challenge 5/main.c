#include <stdio.h>
#include <stdlib.h>
int Factorielle(int a)
{
    int fac=1, i;
    for(i=1; i<=a; i++)
        fac*=i;
    return fac ;
}

int main()
{
    int n, fac;
    printf("Veuillez saisir un nombre :");
    scanf("%d",&n);
    fac =Factorielle(n);
    printf("La factoreille de %d est:  %d  ",n,fac);
    return 0;
}
