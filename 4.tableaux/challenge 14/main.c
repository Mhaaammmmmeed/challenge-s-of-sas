#include <stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
int somme=0;
float Moyenne;
printf("Vueillez saisir la taille du tableax :");
scanf("%d",&n);
int tab[n];
for(i=0;i<n;i++)
{
    printf("Vueillez saisir les elements du tableax :");
    scanf("%d",&tab[i]);
somme=somme + tab[i];

}
Moyenne=somme/n;
printf("la Moyenne des elements de tableux est : %.2f",Moyenne);



    return 0;
}
