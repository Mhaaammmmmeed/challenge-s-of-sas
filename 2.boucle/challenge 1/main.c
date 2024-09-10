#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entre un nombre entier :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%d * %d = %d \n",i,n,i*n);
    return 0;
}
