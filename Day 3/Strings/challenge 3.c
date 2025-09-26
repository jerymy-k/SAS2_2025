#include <stdio.h>
#include <string.h>

int main() {

    char C1[30],C2[30];
    printf("entre :");
    scanf("%[^\n]",C1);
    getchar();
    printf("entre :");
    scanf("%[^\n]",C2);
    strcat(C1,C2);
    printf("%s",C1);



    return 0;
}
