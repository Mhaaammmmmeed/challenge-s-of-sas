#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i,n,min;
    printf("Donnez le nombre des elements du tableau:");
    scanf("%d",&n);
     int t[n];
    for(i=0;i<n;i++)
    {
       printf("Donnez l'element %d:",i+1);
       scanf("%d",&t[i]);
    }

    min=t[0];
    for(i=0;i<n;i++)
    {
       if(t[i]<min) min=t[i];
    }


    printf("Le min est: %d\n",min);

    return 0;
    return 0;
}
