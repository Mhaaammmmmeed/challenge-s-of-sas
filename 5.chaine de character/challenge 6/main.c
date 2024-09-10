#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{char nom[100];

    printf("Entre le nom :");
    scanf("%s",nom);

    for(int i=0;i<strlen(nom);i++){
        printf(" %c\n",nom[i]);
    }
    printf("%d",strlen(nom));
    return 0;
}
