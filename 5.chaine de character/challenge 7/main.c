#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{

char nom[100];
printf("entre le nom :");
scanf("%s",nom);
printf("%s",strupr(nom));
    return 0;
}
