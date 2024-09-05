#include <stdio.h>
#include <stdlib.h>

int main()
{
      int Inverss=0, n;

    printf("entre un nombre :");
    scanf("%d",&n);
    while (n!=0){
        Inverss=Inverss * 10 ;
        Inverss=Inverss + n % 10 ;
       n= n/10 ;
         }
        printf("l'inversse de %d est : %d",n,Inverss);

    return 0;
}
