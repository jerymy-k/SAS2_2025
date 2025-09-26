#include <stdio.h>

    struct  pointer {
        float x;
        float y;
};

int main() {

    struct pointer p = {20, 15};

    struct pointer *P = &p;

    printf("les valeurs des point avant la modification : \n X=%.2f \n Y=%.2f\n", p.x, p.y);


    P ->x=21;
    P ->y=16;

    printf("les valeurs des point apres la modification : \n X=%.2f \n Y=%.2f",P->x,P->y);

    return 0;
}
