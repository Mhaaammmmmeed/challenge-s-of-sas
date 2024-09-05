#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float x,y;
    char opperat ;
    printf("Veuillez saisir 1er nombre :");
    scanf("%f",&x);
    printf ("Menu des opperateur \n");
    printf("division:'/'\n");
    printf("mult:'*'\n");
    printf("moi:'-'\n");
    printf("plus:'+'\n");
    printf("choisi votre operateur: ");
    scanf("%s",&opperat);

    printf("Veuillez saisir 2eme nombre :");
    scanf("%f",&y);

    switch(opperat)
    {
    case '+' :
        printf("%.2f + %.2f = %.2f",x,y,x+y);
        break;
    case '-' :
        printf("%.2f - %.2f = %.2f",x,y,x-y);
        break;
    case '*' :
        printf("%.2 * %.2f = %.2f",x,y,x*y);
        break;
    case '/' :
        if(y != 0)
        {
            printf("%.2f / %.2f = %.2f",x,y,x/y);
        }
        else
            printf("impossible de faire la divition");
        break;
    default :
        printf("Out of range");
        break;
    }







    return 0;
}
