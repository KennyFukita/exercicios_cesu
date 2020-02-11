#include <stdio.h>
#include <stdlib.h>

int main (){
  float real, doll, cotdoll;
    printf ("Informe a cotacao do dolar: ");
    scanf ("%f",&cotdoll);
    fflush (stdin);
    printf ("Informe o valor do produto em dolar: ");
    scanf ("%f",&doll);
        real=doll*cotdoll;
    printf("O valor do produto em real e: %.2f \n", real);
system ("pause");
return 0;
}
