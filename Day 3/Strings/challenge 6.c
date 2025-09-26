#include <stdio.h>
#include <string.h>

int main() {

    char C[30],cheak;
    int cheaking = 0;

    printf("entre :");
    scanf("%[^\n]",C);
    getchar();

    printf("entre :");
    scanf("%c",&cheak);

    for (int i = 0; i<strlen(C);i++){
        if (C[i]==cheak){
            cheaking++;
        }
    }
    if (!cheaking){
        printf("il ya pas ce caractere !!!");
    }
    else
        printf("il ya %d",cheaking);



    return 0;
}
