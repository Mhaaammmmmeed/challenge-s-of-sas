#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,max;
    printf("Donnez le nombre des elements du tableau:");
    scanf("%d",&n);
    int t[n];
    for(i=0;i<n;i++)
    {
       printf("Donnez l'element :",);
       scanf("%d",&t[i]);
    }

    max=t[0];
    for(i=0;i<n;i++)
    {

       if(t[i]>max)
            max=t[i];
    }

    printf("Le max est: %d\n",max);

    return 0;

}
