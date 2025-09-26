#include <stdio.h>

    struct livre {

    char titre[20];
    char auteur[20];
    int annee;
};
    void affichage (char *T,char *A,int An){
        printf("--> %s | %s | %d\n\n",T,A,An);
    }

int main() {

    struct livre l={"boite a merveille","ahmed sfrioui",{1952}};
     affichage(l.titre,l.auteur,l.annee);


    return 0;
}