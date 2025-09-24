#include <stdio.h>
#include <stdlib.h>
    int multiplication (int a,int b){
        int p;
        p=a*b;
        return p;
    }
    int main (){
        int a,b,resultas;
        printf("entre la valeur de A :");
        scanf("%d",&a);
        printf("entre la valeur de B :");
        scanf("%d",&b);
        resultas=multiplication(a,b);
        printf("le produit de a et b est : %d",resultas);
    return 0;
    }
