#include <stdio.h>
#include <stdlib.h>

int main () {
 float a, b, c, d=0;
    printf ("Informe o valor de B: ");
    scanf ("%f", &b);
    printf ("Informe o valor de C: ");
    scanf ("%f", &c);
    printf ("Informe o valor de D: ");
    scanf ("%f", &d);
        a = b + c*(d/2);
    printf ("Valor de A: %f \n", a);
system ("pause");
return 0;
}
