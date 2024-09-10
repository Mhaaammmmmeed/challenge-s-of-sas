#include <stdio.h>
#include <stdlib.h>

int  Minimum(int a, int b)
{
    int min;
    if (a-b>0)
        min= b;
    else
        min =a;
    return min ;


  }



    int main()
    {
        int a, b,min ;
        printf("Veuillez saisir 1er nombre :");
        scanf("%d",&a);
        printf("Veuillez saisir 1er nombre :");
        scanf("%d",&b);
        min = Minimum(a,b);
        printf(" le maximum est %d",min);
    return 0;
}
