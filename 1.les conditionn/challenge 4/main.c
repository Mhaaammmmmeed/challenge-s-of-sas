#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v, v2 ;
    printf("veuillez entre la vitesse en kilometres par heure (km/h) : ");
    scanf("%f",&v);
    v2 = v * 0.27778 ;
    printf("la transformation de de %2.f par metres par second (m/s) est : %2.f",v,v2);

    return 0;
}
