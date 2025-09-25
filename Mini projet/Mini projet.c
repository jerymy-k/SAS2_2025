#include <stdio.h>
#include <string.h>

int main() {

    int n;

// Déterminer combien de livres
    again:
    printf("Combien de livres veux-tu stocker ?\n\n-> ");
    scanf("%d", &n);
    getchar();

    if (n==0){

        printf("\n");

        getchar();

        goto again;
    }
    char titre[n][50];
    char auteur[n][50];
    double prix[n];
    int quantite[n];

// stockage des livers

    for (int i=0;i<n;i++) {

        printf("\nEntre le titre de livre : ");
        scanf("%[^\n]", titre[i]);
        getchar();

        printf("Entre l'auteur de livre : ");
        scanf("%[^\n]", auteur[i]);
        getchar();

        printf("Entre le prix de livre : ");
        scanf("%lf", &prix[i]);
        getchar();

        printf("Entre la quantite de livre : ");
        scanf("%d", &quantite[i]);
        getchar ();

        printf("\n");
    }

// menu

    menu:

    int choix;

    printf(" --- Systeme de Gestion de Stock dans une Librairie ---\n");
    printf("|1-Ajouter un livre au stock                           |\n");
    printf("|2-Afficher tous les livres disponibles                |\n");
    printf("|3-Mettre à jour la quantite d'un livre                |\n");
    printf("|4-Supprimer un livre du stock                         |\n");
    printf("|5-Afficher le nombre total de livres en stock         |\n");
    printf("|6-Exit                                                |\n");
    printf(" ------------------------------------------------------\n\n-> ");
    scanf("%d", &choix);

// les choix de menu

    switch (choix) {

        case 1:
                n++;

                printf("\n-Entre le titre de livre : ");
                getchar();
                scanf("%[^\n]", titre[n-1]);

                getchar();
                printf("-Entre l'auteur de livre : ");
                scanf("%[^\n]", auteur[n-1]);

                printf("-Entre le prix de livre : ");
                scanf("%lf", &prix[n-1]);

                printf("-Entre la quantite de livre : ");
                scanf("%d", &quantite[n-1]);

                printf("\n");

                goto menu;

        case 2:

                for(int i=0;i<n;i++){

                    printf("\n%d--> %s |",i+1,titre[i]);
                    printf(" %s |",auteur[i]);
                    printf(" %.2f DH|",prix[i]);
                    printf(" %d PCS\n\n",quantite[i]);
                }

                goto menu;

        case 3:

                int trouve = 0;
                char cherche[50];
                int cheaking=0;

                while (!trouve) {

                    printf("\n-Quel livre veux-tu chercher ? \n\n-> ");
                    getchar();
                    scanf("%[^\n]", cherche);

                    for (int i = 0; i < n; i++) {

                        if (strcmp(cherche, titre[i]) == 0) {

                            printf("\n%d--> %s |",i+1,titre[i]);
                            printf(" %s |",auteur[i]);
                            printf(" %.2f DH|",prix[i]);
                            printf(" %d PCS\n\n",quantite[i]);

                            int new_qte;

                            printf("-Quel est la nouvelle quantite ? \n\n-> ");
                            scanf("%d", &new_qte);
                            quantite[i] = new_qte;

                            printf("\n%d--> %s |",i+1,titre[i]);
                            printf(" %s |",auteur[i]);
                            printf(" %.2f DH|",prix[i]);
                            printf(" %d PCS\n\n",quantite[i]);

                            trouve = 1;

                            break;
                        }
                    }
                    if (!trouve) {

                        cheaking++;
                        if (cheaking != 3)
                            printf("\n-Livre introuvable!! Essayez encore !!\n\n");

                    }

                    if (cheaking==3){

                        printf("\n-Vous avez essaye plusieyrs fois !!\n\n");

                        break;
                    }
                }

                goto menu ;

        case 4:
                cheaking=0;

                livre_introuvable:

                char recherche[50];
                int cheak=0;

                printf("\n-Quel livre voulez vous supprimer ?\n\n-> ");
                getchar();
                scanf("%[^\n]",recherche);

                for(int i=0; i<n;i++){

                    if (strcmp(recherche, titre[i]) == 0){

                        for(int j=i;j<n;j++){

                            strcpy(titre[j], titre[j+1]);
                            strcpy(auteur[j], auteur[j+1]);
                            prix[j] = prix[j+1];
                            quantite[j] = quantite[j+1];
                        }

                        n--;
                        cheak++;
                    }
                }

                if (cheaking==2){

                    printf("\n-Vous avez essaye plusieyrs fois !!\n\n");

                    goto menu;
                }

                if (cheak==0) {

                        printf("\n-Livre introuvable!! Essayez encore!!\n");

                        cheaking++;

                        goto livre_introuvable;
                }

                printf("\n");

                goto menu ;

        case 5:

                int total=0;

                for (int i=0;i<n;i++){

                    total+=quantite[i];
                }

                printf("\n-Le nombre total de livres en stock est :\n--> %d PCS\n\n",total);

                goto menu;

        case 6:

                printf("\033[1;32m\n");

                printf("####################################################\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                     A BIENTOT                    #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("#                                                  #\n");
                printf("####################################################\n\n");

                printf("\033[0m");

                break;

        default :

                printf("\n-Choix invalid !!!\n\n");

                goto menu;
    }

    return 0;
}
