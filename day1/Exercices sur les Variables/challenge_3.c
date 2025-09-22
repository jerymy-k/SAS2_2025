#include <stdio.h>
#include <stdlib.h>

int main()
{
    float y,km;
    printf("entre la distance en km :");
    scanf("%f",&km);
    y=km * 1093.61;
    printf("la distance en Yards est :%.2f Yards",y);
    return 0;

}
