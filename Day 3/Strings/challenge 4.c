#include <stdio.h>
#include <string.h>

int main() {

    char C[30],V[30];

    printf("entre :");
    scanf("%[^\n]",C);
    getchar();
    printf("entre :");
    scanf("%[^\n]",V);

    if (strcmp(C,V)==0){
        printf("bhal bhal\n");
    }
    else
        printf("machi bhal bhal");




    return 0;
}
