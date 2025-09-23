#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s,p,m;
    float d,a,b;
    printf("entre le nombre A :");
    scanf("%f",&a);
    printf("entre le nombre B :");
    scanf("%f",&b);
    s=a+b;
    m=a-b;
    p=a*b;
    d=a/b;
    printf("A + B = %d \nA - B = %d \nA * B = %d \nA / B = %.2f \n",s,m,p,d);
    return 0;

}
