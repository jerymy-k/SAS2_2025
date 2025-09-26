    #include <stdio.h>

    int main (){

        char C_c[30];

        printf("entre votre nom :");
        scanf("%[^\n]",C_c);
        int i=0;
        while (C_c[i] != '\0'){
            i++;
        }
        printf("la longuer de la chaine est : %d",i+1);

        return 0;
    }
