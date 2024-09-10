#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix ;
    float total=0;
    float moyenne;
    float seuil;
    int  conteur;
    int n,i;



    printf("Combien de produits ont ete vendus aujourd'hui ? :");
    scanf("%d",&n);
    float montantVent[n];
    float ventPlusEleve=montantVent[0];
    float ventPlusBasse=montantVent[0];

printf("");

    for(i=0; i<n; i++)
    {
        printf("Entre le montants de vente du produit %d:",i+1);
        scanf("%f",&montantVent[i]);
    }



    do
    {
        printf("Que souhaitez-vous faire\n");
        printf("1.calculer le total des ventes\n");
        printf("2.Trouver la vent la plus elevee et la basse\n");
        printf("3.afficher les ventes superieurs a une moyenne \n");
        printf("4.compter le nombre de vente superieures a seuil \n");
        printf("5.compter le nombre ventes inferieures a a seuil \n");
        printf("6.quitter\n");
        printf("Enter votre choix :");
        scanf("%d",&choix);
        switch(choix)
        {

        case 1:

            for(i=0; i<n; i++)
            {
                total=total+montantVent[i];
            }
            printf("Totale : %.2f \n",total);
            break;
        case 2:
            for(i=0; i<n; i++)
            {
                if(montantVent[i]>ventPlusEleve)
                {
                    ventPlusEleve=montantVent[i];
                }
                else
                    ventPlusBasse=montantVent[i];
            }
            printf("la ventes la plus eleve est :%.2f\n La ventes la plus basse est :%.2f\n",ventPlusEleve,ventPlusBasse);
            break;
        case 3:
            printf("donner un  moynne :");
            scanf("%f",&moyenne);
            for(i=0; i<n; i++)
            {
                if(montantVent[i]>moyenne)
                    printf("superieures est %.2f\n",montantVent[i]);
            }
            break;
        case 4:
            conteur = 0;
            printf("donner un  seuil :");
            scanf("%f",&seuil);
            for(int k=0; k<n; k++)
            {
                if(seuil<montantVent[k])

                    conteur+=1;
            }
            printf("le nombre de ventes superieurs a %.2f euros:%d \n",seuil,conteur);
            break;
        case 5:
            conteur =0;
            printf("donner un  seuil :");
            scanf("%f",&seuil);
            for(int j=0; j<n; j++)
            {
                if(seuil>montantVent[j])
                    conteur+=1;
            }

            printf("le nombre de ventes inferieures a %.2f euros:%d \n",seuil,conteur);
            break;
        case 6:
            printf("Au revoir !");
            break;
        default:
            printf("votre choix n'est pas dant le menu !\n");


        }
    }
    while(choix!=6);

    return 0;
}
