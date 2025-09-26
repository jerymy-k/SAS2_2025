#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    char C[30];
    int j=0;

     printf("entre :");
     //fgets(C,sizeof(C),stdin);

     scanf("%[^\n]",C);
     C[strcspn(C,"\n")]='\0';

     printf("%s\n",C);
     for (int i=0;i<strlen(C);i++){

        if (C[i]!=' '){
            //j++;
            C[j]=C[i];
            j++;
        }

     }
     for (int i=0;i<j;i++){

        printf("%c",C[i]);

        }

    return 0;
}
