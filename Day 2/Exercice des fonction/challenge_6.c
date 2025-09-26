#include <stdio.h>
#include <stdlib.h>
    void facteur (int n,int T[n],int f){
        int i,N;
        for (i=0;i<n;i++){
            printf("%d x %d = %d",T[i],f,T[i]*f);
        }
    }
    int main(){
        int i,f,n,T[n];
        printf("entre le nombre des elements de tableau:");
        scanf("%d",&n);
        printf("entre les elements de tableau:\n");
        for(i=0;i<n;i++){
            scanf("%d",&T[i]);
        }
        printf("entre le facteur des elements:");
        scanf("%d",&f);
        return 0;
    }
