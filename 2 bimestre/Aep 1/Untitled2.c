#include <stdio.h>
#include <stdlib.h>

int main () {
 float area,altura,lado;
    printf ("Qual o valor da altura? ");
    scanf ("%f",&altura);
    printf ("Qual o valor do lado? ");
    scanf ("%f",&lado);
        area=altura*lado;
    printf ("O valor da area e: %.0f \n",area);
system ("pause");
return 0;
}
