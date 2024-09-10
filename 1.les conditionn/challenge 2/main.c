#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, k;
    printf("veuillez entre température : ");
    scanf("%f",&C);
    k = C + 273.15 ;
    printf("la témperature en kelvin est : %.2f",k);
    return 0;
}
