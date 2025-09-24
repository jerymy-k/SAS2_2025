#include <stdio.h>
#include <stdlib.h>
    int somme(int a,int b){
        int s;
        s=a+b;
        return s;
    }
    int main (){
        int a,b,resultas;
        printf("entre la valeur de A :");
        scanf("%d",&a);
        printf("entre la valeur de B :");
        scanf("%d",&b);
        resultas=somme(a,b);
        printf("la somme de a et b est : %d",resultas);
    return 0;
    }
