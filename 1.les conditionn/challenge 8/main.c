#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, MoyenneG;
    printf("veuillez entre 1er nombre :");
    scanf("%f",&a);
    printf("veuillez entre 2eme nombre :");
    scanf("%f",&b);
    printf("veuillez entre 3eme nombre :");
    scanf("%f",&c);
    MoyenneG = pow((a * b * c),(1/3));
    printf("la moyenne geometrique est :%2.f",MoyenneG);
    return 0;
}
