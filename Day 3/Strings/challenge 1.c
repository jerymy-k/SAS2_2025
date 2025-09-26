#include <stdio.h>

    int main (){

        char C_c[30];

        printf("entre votre nom :");
        scanf("%[^\n]",C_c);

        printf("Bonjour !! %s ",C_c);

        return 0;
    }
