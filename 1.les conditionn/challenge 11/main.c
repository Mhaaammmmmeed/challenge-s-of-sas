#include <stdio.h>
#include <stdlib.h>

int main()
{   float Surface, longueur, largeur ;
    printf("veuillez entre longeur de rectangle :");
    scanf("%f",&longueur);
    printf("veuillez entre largeur de rectangle :");
    scanf("%f",&largeur);

         Surface= longueur* largeur;

      printf("la Surface de rectangle est : %.2f",Surface);

    return 0;
}
