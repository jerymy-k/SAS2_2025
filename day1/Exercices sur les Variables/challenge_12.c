#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,inv,i;
    inv=0;
    printf("entre un nombre :");
    scanf("%d",&n);
    while(n!=0){
        inv=(inv*10)+(n%10);
        n=n/10;
    }
    printf("l'inverse de le nombre est : %d",inv);
    return 0;

}
