#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nom[20],prenom[20],sexe[20],email[100];
    int age;
    printf("Entre votre nom:");
    scanf("%s",&nom);
    printf("Entre votre prenom:");
    scanf("%s",&prenom);
    printf("Entre votre sexe:");
    scanf("%s",&sexe);
    printf("Entre votre email:");
    scanf("%s",&email);
    printf("Entre votre age:");
    scanf("%s",&age);
    printf("votre nom et prenom est %s %s , est vous-etes %s ,tu es %d votre email est %s",nom,prenom,sexe,age,email);
    return 0;

}
