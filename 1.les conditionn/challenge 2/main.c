#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C, k;
    printf("veuillez entre temp�rature : ");
    scanf("%f",&C);
    k = C + 273.15 ;
    printf("la t�mperature en kelvin est : %.2f",k);
    return 0;
}
