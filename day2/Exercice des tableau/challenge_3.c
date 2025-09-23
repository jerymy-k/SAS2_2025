#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=0;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
        s+=t[i];
    }
        printf("la somme des valeurs est : %d",s);
    return 0;

}
