#include <stdio.h>
#include <string.h>

int main() {

    char tracks[][80] = {
            "I left my heart in Harvard Med School",
            "Newark, Newark - a wonderful town",
            "Dancing with a Dork",
            "From here to maternity",
            "The girl with Iwo Jima",
        };

        char find [30];

        printf("entre une chaine de caractere:");
        fgets(find,sizeof(find),stdin);

        //find[strcspn(find,"\n")]='\0';
        find[strlen(find)-1]='\0';

        int stor=0;

        for (int i=0;i<5;i++){

            if (strstr(tracks[i],find)){

                printf("%s\n",tracks[i]);
                stor++;
            }

        }
        if (!stor){
            printf("makayn walo\n");
        }

    return 0;
}
