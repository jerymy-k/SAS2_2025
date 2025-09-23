#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int x1,y1,z1,x2,y2,z2;
    float d;
    printf("entre le point A (x1,y1,z1)\n");
    printf("x1:");
    scanf("%d",&x1);
    printf("y1:");
    scanf("%d",&y1);
    printf("z1:");
    scanf("%d",&z1);
    printf("entre le point B (x2,y2,z2)\n");
    printf("x2:");
    scanf("%d",&x2);
    printf("y2:");
    scanf("%d",&y2);
    printf("z2:");
    scanf("%d",&z2);
    d = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) );
    printf("la distance entre le point A et B = %.2f",d);
    return 0;

}
