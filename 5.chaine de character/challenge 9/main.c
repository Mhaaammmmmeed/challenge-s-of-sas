#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char chaine[50];
    printf("Entre la chaine :");
    gets(chaine);
    int count ;
    count=strlen(chaine);
    for(int i=0;i<count;i++) {
        if(chaine[i]==' '){
            for(int j=i;j<count-1;j++){
                chaine[j]=chaine[j+1];
            }
            count--;
        }
    }
    printf("la chaine sans espace est : %s ",chaine);
    return 0;
}
