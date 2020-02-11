#include <stdio.h>
#include <stdlib.h>

int main () {
    int x,z;
    float media;
    x = 1;
    media = 0;
        for (x = 1; x <= 10; x = x + 1){
            printf ("Informe o %d valor: ",x);
            scanf ("%d", &z);
                media = media + z;
            }

            media = media/10;
    printf ("A media dos dez valores e: %.2f \n",media);

system ("pause");
return 0;
}
