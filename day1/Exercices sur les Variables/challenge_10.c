#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float r,v;
    const float PI=3.14;
    printf("entre le rayon de la sphere :");
    scanf("%f",&r);
    v=(4.0/3)*PI*pow(r,3);
    printf("le volume de la sphere = %.2f",v);
    return 0;

}
