#include <stdio.h>
#include <stdlib.h>

int main()
{
    float d, yards ;
    printf("veuillez entre la distance en kilometres :");
    scanf("%f",&d);
     yards = d * 1093.61 ;
     printf("la transforme de %2.f en yards est : %2.f",d,yards);
    return 0;
}
