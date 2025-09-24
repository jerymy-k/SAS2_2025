#include <stdio.h>
#include <stdlib.h>
    int minimum (int a,int b){
        int min;
        min=b;
        if (a<b)
            min=a;
        return min;
    }
    int main (){
        int a,b,resultas;
        printf("entre la valeur de A :");
        scanf("%d",&a);
        printf("entre la valeur de B :");
        scanf("%d",&b);
        resultas=minimum(a,b);
        printf("le minimum entre a et b est : %d",resultas);
    return 0;
    }
