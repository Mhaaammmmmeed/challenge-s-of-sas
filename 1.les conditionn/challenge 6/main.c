#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("veuilez entre a :");
    scanf("%f",&a);
     printf("veuilez entre b :");
    scanf("%f",&b);
    printf("la somme de %2.f + %2.f = %2.f \n",a,b,a+b);
    printf("la Soustraction de %2.f - %2.f = %2.f \n",a,b,a-b);
    printf("la Multiplication de %2.f * %2.f = %2.f \n",a,b,a*b);
    if (b!=0)
        printf("la Division de %2.f / %2.f = %2.f \n",a,b,a/b);
    else
        printf("impossible !!");

    return 0;
}
