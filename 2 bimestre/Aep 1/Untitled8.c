#include <stdio.h>
#include <stdlib.h>

int main (){
    char nome[20],ende[50], sexo, nacio[50];
    int id;
        printf ("Informe o nome: ");
        gets (nome);
         fflush (stdin);
        printf ("Informe o endereco: ");
        gets (ende);
         fflush (stdin);
        printf ("Informe o sexo: ");
        scanf ("%c",&sexo);
         fflush (stdin);
        printf ("Informe a nacionalidade: ");
        scanf ("%s",&nacio);
         fflush (stdin);
        printf ("Informe a idade: ");
        scanf ("%d",&id);
         fflush (stdin);
system ("pause");
return 0;
}
