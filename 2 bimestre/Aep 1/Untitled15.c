#include <stdio.h>
#include <stdlib.h>

int main () {
  int idade=0,maiorid=0, x;
  char nome [25];
  maiorid = 0;


    for (x=1; x<=5; x = x + 1){
    printf ("Informe o %d nome : ",x);
    gets (nome);
    fflush(stdin);
    printf ("Informe a idade: ");
    scanf ("%d", &idade);
    fflush(stdin);
    printf ("\n");

        if (idade > maiorid){
            maiorid = idade;
        }
    }

    printf ("A pessoa com maior idade possui %d anos \n",maiorid);

system ("pause");
return 0;
}
