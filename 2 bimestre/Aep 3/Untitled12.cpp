#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char vetA[5][40],vetB[5][40];
	int x=0,i=0;
	
	for (x=0;x<5;x++){
		printf("Informe o %d nome: ",x+1);
		gets(vetA[x]);
	}
	
	printf("\nNOMES COM TODOS CARACTERES MAIUSCULO\n");
	
	for (x=0;x<5;x++){
		strcpy(vetB[x],strupr(vetA[x]));
		printf("->%d nome: %s\n",x+1,vetB[x]);
	}
		
system("pause");	
return 0;	
}
