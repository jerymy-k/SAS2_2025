#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    char a;
    printf("entre un caracteree :");
    scanf("%c",&a);
    switch (a) {
        case 'a' :
        case 'e' :
        case 'y' :
        case 'u' :
        case 'i' :
        case 'o' :
            printf("c'est une voyelle");
                    break;
        default :
            printf("c'est pas une voyelle");
                    break;
    }
    return 0;

}
