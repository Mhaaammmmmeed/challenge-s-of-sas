#include <stdio.h>
#include <stdlib.h>

int  Maximum(int a, int b)
{
    int max;
    if (a-b>0)
        max = a;
    else
        max =b;
    return max ;


  }



    int main()
    {
        int a, b,max ;
        printf("Veuillez saisir 1er nombre :");
        scanf("%d",&a);
        printf("Veuillez saisir 1er nombre :");
        scanf("%d",&b);
        max = Maximum(a,b);
        printf(" le maximum est %d",max);

        return 0;
    }
