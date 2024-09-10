#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
char nom[20];
char prenom[20];
int note;

}Etudiant ;


int main()
{
    int n,i;
    printf("Entre le combien d'etudiant : ");
    scanf("%d",&n);
    Etudiant etudiant1[n];
    for(i=0;i<n;i++){
    printf("Entre le nom du personne %d : ",i+1);
    scanf("%s",&etudiant1[i].nom);
    printf("Entre le prenome du personne %d : ",i+1);
    scanf("%s",etudiant1[i].prenom);
    printf("Entre l'age du personne %d : ",i+1);
    scanf("%d",&etudiant1[i].note);}

    for(i=0;i<n;i++){
    printf("les information d'etudiant %d: \n",i+1);
    printf("le nome d'etudiant : %s \n",etudiant1[i].nom);
    printf("le prenome d'etudiant : %s \n",etudiant1[i].prenom);
    printf("la note d'etudiant: %d\n",etudiant1[i].note);
    }
    return 0;
}
