#include <stdio.h>
#include <stdlib.h>

int main () {
 int cont=1, base, exp, pot = 1 ;
    printf ("Informe o valor da base: ");
    scanf ("%d", &base);
    printf ("Informe o valor do expoente: ");
    scanf ("%d", &exp);
     fflush (stdin);
    for (cont=0 ; cont < exp ; cont = cont + 1){
       pot = pot * base ;
    }
    printf("Valor da potencia: %d \n", pot);
system ("pause");
return 0;
}
