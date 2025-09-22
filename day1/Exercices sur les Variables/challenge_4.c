#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m_s,km_h;
    printf("entre la vitesse en km/h :");
    scanf("%f",&km_h);
    m_s=km_h * 0.27778;
    printf("la vitesse en m/s est :%.2f m/s",m_s);
    return 0;

}
