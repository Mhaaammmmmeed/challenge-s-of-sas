#include <stdio.h>
#include <stdlib.h>

int main()
{  int n,i;
    printf("Veuillew entre la taille de tableaux : ");
    scanf("%d",&n);

    int T[n],T2[n];


    for(i=0;i<n;i++){
        printf("Vueillez saisire les element de tableaux T[%d] = ",i+1);
    scanf("%d",&T[i]);
    T2[i]=T[i];
    }
    for(i=0;i<n;i++){

        printf("T2[%d] = %d \n",i+1,T2[i]);
         }
    return 0;
}
