#include <stdio.h>
#include <stdlib.h>



int somme(int x , int y){
   int p =0;
   p = x * y;
    return p ;
}
int main()
{     int a , b , p ;
printf("Veuillez saisir 1er nombre :");
scanf("%d",&a);
printf("Veuillez saisir 1er nombre :");
scanf("%d",&b);
p = somme(a,b);
    printf("la somme de %d + %d = %d ",a,b,p);
    return 0;
}
