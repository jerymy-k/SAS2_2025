#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,c,croi;
    printf("entre le nombre des elemenets de tableau:");
    scanf("%d",&n);
    int t[n];
    for (i=0;i<n;i++){
        printf("entre la valeur N%d :",i+1);
        scanf("%d",&t[i]);
    }
    for(i=0;i<n;i++){
        for (c=i+1;c<n;c++)
            if(t[i]>t[c]){
                croi=t[i];
                t[i]=t[c];
                t[c]=croi;
            }
        }
    printf("les elements en ordre croissant :\n");
    for(i=0;i<n;i++){
        printf("la valeur N%d : %d\n",i+1,t[i]);
    }
        return 0;

}
