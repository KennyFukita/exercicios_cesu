#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	const int tam=2;
	int x=0;
	char vet[tam][50];
	
	for(x=0;x<tam;x++){
		printf("Informe o %d nome: ",x+1);
		gets(vet[x]);		
	}
	
		printf("\nNomes informados: \n");
		
	for(x=0;x<tam;x++){
		printf("->%d nome: %s\n",x+1,vet[x]);		
	}
	
system("pause");	
return 0;	
}
