#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float r, volume;
    const pi=3.14;
    printf("veuillez entre un rayon d'un spher ");
    scanf("%f",&r);
    volume = (4/3) * pi * (pow(r,3));
    printf("le volume de spher est :%.2f",volume);
    return 0;
}
