#include <stdio.h>
#include <stdlib.h>
    int factorielle (int n){
        int f=1,i;
        for(i=2;i<=n;i++){
            f=f*i;
        }
        return f;
    }
    int main (){
        int n,resultas;
        printf("entre la valeur de N :");
        scanf("%d",&n);
        resultas=factorielle(n);
        printf("le factorielle de n est : %d",resultas);
    return 0;
    }
