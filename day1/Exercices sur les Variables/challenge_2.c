#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,n;
    printf("entre la temperature en Celsius :");
    scanf("%f",&n);
    k=n+273.15;
    printf("la temperature en kelvin est :%.2f K",k);
    return 0;

}
