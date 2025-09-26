#include <stdio.h>
#include <stdlib.h>
    int maximum (int a,int b){
        int max;
        max=b;
        if (a>b)
            max=a;
        return max;
    }
    int main (){
        int a,b,resultas;
        printf("entre la valeur de A :");
        scanf("%d",&a);
        printf("entre la valeur de B :");
        scanf("%d",&b);
        resultas=maximum(a,b);
        printf("le maximum entre a et b est : %d",resultas);
    return 0;
    }
