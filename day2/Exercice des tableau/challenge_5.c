#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,s=0,min;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
    }
    min=t[1];
    for(i=0;i<n;i++){
        if(t[i]<min){
            min=t[i];
        }
    }
    printf("la maximun est : %d",min);
    return 0;

}
