#include <stdio.h>
#include <stdlib.h>

int main()
{  float T ;
    printf("veuilez entre la temperature en Celsius");
    scanf("%f",&T);
    if (T<0){
        printf("l'etat de l'eau est Solide"); }
    else{
        printf("l'etat de l'eau est Gaz");}
    if (0<=T && T<100)
        printf("l'etat de l'eau est Liquide");
         return 0;
}
