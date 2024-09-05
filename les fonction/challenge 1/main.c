#include <stdio.h>
#include <stdlib.h>
int somme(int x , int y){
   int s =0;
   s = x + y;
    return s ;
}
int main()
{     int a , b , s ;
printf("Veuillez saisir 1er nombre :");
scanf("%d",&a);
printf("Veuillez saisir 1er nombre :");
scanf("%d",&b);
s = somme(a,b);
    printf("la somme de %d + %d = %d ",a,b,s);
    return 0;
}
