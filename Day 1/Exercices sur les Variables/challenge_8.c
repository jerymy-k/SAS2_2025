#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,m;
    printf("entre le nombre A :");
    scanf("%f",&a);
    printf("entre le nombre B :");
    scanf("%f",&b);
    printf("entre le nombre C :");
    scanf("%f",&c);
    m=pow((a*b*c),(1.0/3));
    printf("le moyenne est : %.2f",m);
    return 0;

}
