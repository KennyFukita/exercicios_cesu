#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	const int tam=9;
	char nome[tam][80],tmp[80];
	int i=0,x=0;
	
	for(x=0;x<=tam;x++){
		printf("Informe o %d nome: ",x+1);
		gets(nome[x]);
	}
	
	for(x=0;x<tam;x++){
		for(i=x+1;i<=tam;i++){
			if(strcmp(nome[x],nome[i])>0){
				strcpy(tmp,nome[x]);
				strcpy(nome[x],nome[i]);
				strcpy(nome[i],tmp);
			}
		}
	}
	
	printf("\nMaior nome: %s\n",nome[x]);
	printf("Menor nome: %s\n",nome[0]);
	
system("pause");	
return 0;
}
