#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float x1, x2, y1, y2, z1, z2, Distance;
    printf("veuillez entre deux 1er point x1 et x2 : ");
    scanf("%f%f",&x1,&x2);
    printf("veuillez entre deux 2eme point y1 et y2 : ");
    scanf("%f%f",&y1,&y2);
    printf("veuillez entre deux 3eme point z1 et z2 : ");
    scanf("%f%f",&z1,&z2);
    Distance = sqrt( pow((x2-x1),2) + pow((y2-y1),2) + pow((z2-z1),2));
    printf("la distance entre deux pointe est :%.2f",Distance);
    return 0;
}
