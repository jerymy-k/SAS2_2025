#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("entre la temperature en Celsius :");
    scanf("%f",&c);
    if (c<0)
        printf("Solide");
    else if(0<=c && c<100)
        printf("Liquide");
    else
        printf("Gaz");
    return 0;

}
