#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
    }
    printf("entre le facteur :");
    scanf("%d",&f);
    for (i=0;i<5;i++){
        printf("%d x %d = %d\n",t[i],f,t[i]*f);
    }
    return 0;

}
