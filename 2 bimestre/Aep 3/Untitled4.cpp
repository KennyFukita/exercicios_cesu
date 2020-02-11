#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int tam=0,x=0;
	char vet[20];
	
	do{
	printf("Informe um nome: ");
	gets(vet);
	tam=strlen(vet);
		if(tam<4){
			printf("Nome invalido\n");
			system("pause");
			system("cls");
		}
	}while(tam<=3);
	
	printf("Nome ao contrario: ");
	
	for(x=tam-1;x>=0;x--){
		printf("%c",vet[x]);
	}
	
	printf("\n");
system("pause");	
return 0;	
}
