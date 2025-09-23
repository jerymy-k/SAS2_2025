#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
    }
    for (i=0;i<5;i++){
        printf("la valeur N%d : %d\n",i+1,t[i]);
    }
    return 0;

}
