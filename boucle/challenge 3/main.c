#include <stdio.h>
#include <stdlib.h>

int main()
{ int n,i=2;
    printf("entre un nomre entier:");
    scanf("%d",&n);

    while(n % i !=0 && i<n){
        i++;
    }
         if (i==n)
        printf("%d est une nombre premier ",n);
       else
        printf("%d ce n'est pas un nomnre premier",n);
    return 0;
}
