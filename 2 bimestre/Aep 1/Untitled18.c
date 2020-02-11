#include <stdio.h>
#include <stdlib.h>

int main (){
    int x = 0, y, fato = 1;
        printf ("Informe um valor: ");
        scanf ("%d", &x);

            for (y=1; y<=x; y++){
                fato = fato * y;
            }
        printf ("O fatorial de %d e: %d \n",x,fato);

system ("pause");
return 0;
}
