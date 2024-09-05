#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    printf("entre n");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        for(j=0; j<=(n*2 ); j++)
        {
            if(j>=n-i && j <= n+i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");

    }
    printf("");
    return 0;
}
