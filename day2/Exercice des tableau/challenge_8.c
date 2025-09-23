#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c,croi;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n],y[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
    }
    for (i=0;i<n;i++){
        y[i]=t[i];
    }
    printf("les elemenets de tableau N1 est :\n");
    for (i=0;i<n;i++){
        printf("N%d : %d\n",i+1,t[i]);
    }
    printf("les elemenets de tableau N2 est :\n");
    for (i=0;i<n;i++){
        printf("N%d : %d\n",i+1,y[i]);
    }
        return 0;

}
