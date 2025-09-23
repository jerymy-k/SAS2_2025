#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,n3,s,m;
    printf("entre le nombre N1 :");
    scanf("%f",&n1);
    printf("entre le nombre N2 :");
    scanf("%f",&n2);
    printf("entre le nombre N3 :");
    scanf("%f",&n3);
    n1*=2;
    n2*=3;
    n3*=5;
    s=n1+n2+n3;
    m=s/10;
    printf("le moyenne est : %.2f",m);
    return 0;

}
