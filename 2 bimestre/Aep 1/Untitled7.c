#include <stdio.h>
#include <stdlib.h>

int main () {
 float x1,x2,x3,media;
    printf ("Informe o primeiro valor: ");
    scanf ("%f", &x1);
    printf ("Informe o segundo valor: ");
    scanf ("%f", &x2);
    printf ("Informe o terceiro valor: ");
    scanf ("%f", &x3);
        media = (x1 + x2 +x3)/3;
    printf ("Media :%2.f \n",media);
system ("pause");
return 0;
}
