#include <stdio.h>
#include <stdlib.h>

int main (){
  float area,base,altura;
    printf ("Informe o valor da base: ");
    scanf ("%f",&base);
    printf ("Qual o valor da altura? ");
    scanf ("%f",&altura);
        area=(base*altura)/2;
    printf ("A area e: %.2f \n",area);
system ("pause");
return 0;
}
