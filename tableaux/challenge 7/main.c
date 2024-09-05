#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,croiss;
    printf("Veuillew entre la taille de tableaux : ");
    scanf("%d",&n);
    int Tab[n];
    for(i=0;i<n;i++){
        printf("Vueillez saisire les element de tableaux T[%d] = ",i+1);
    scanf("%d",&Tab[n]);
    }
for (i=0 ; i<n-1 ; i++)
            {
                if (Tab[i] > Tab[i+1])
                {
                    croiss = Tab[i] ;
                    Tab[i] = Tab[i+1] ;
                    Tab[i+1] = croiss ;

                }

                            printf("les element en ordre croissqnte est : =%d \n ",Tab[i]);
            }
 /*for(i=0;i<n;i++){
     printf("les element en ordre croissqnte est : =%d \n ",Tab[i]);*/


    return 0;
}
