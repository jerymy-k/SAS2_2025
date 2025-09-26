#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    int d,m,y;
    printf("entre la date en ce formulee JJ/MM/AAAA :\n");
    printf("entre le jour :");
    scanf("%d",&d);
    printf("entre le mois :");
    scanf("%d",&m);
    printf("entre l'anne :");
    scanf("%d",&y);
    printf("%d / %d / %d ",d,m,y);
    switch (m){
    case 1 :
        printf("%d - janvier - %d",d,y);
            break;
    case 2 :
        printf("%d - fevrier - %d",d,y);
            break;
    case 3 :
        printf("%d - mars - %d",d,y);
            break;
    case 4 :
        printf("%d - avril - %d",d,y);
            break;
    case 5 :
        printf("%d - may - %d",d,y);
            break;
    case 6 :
        printf("%d - june - %d",d,y);
            break;
    case 7 :
        printf("%d - juille - %d",d,y);
            break;
    case 8 :
        printf("%d - aout - %d",d,y);
            break;
    case 9 :
        printf("%d - september - %d",d,y);
            break;
    case 10 :
        printf("%d - octobre - %d",d,y);
            break;
    case 11 :
        printf("%d - novembre - %d",d,y);
            break;
    case 12 :
        printf("%d - decembre - %d",d,y);
            break;
    default :
        printf("invalide !!!!!!");
            break;
    }
    return 0;

}
