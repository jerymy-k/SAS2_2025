#include <stdio.h>

    struct Personne {

    char prenom[20];
    char nom[20];
    int age;
};

int main() {

    struct Personne p={"mohamed","elkreymy",{20}};

    printf("my name is %s %s i have %d years old !!\n\n",p.nom,p.prenom,p.age);

    return 0;
}