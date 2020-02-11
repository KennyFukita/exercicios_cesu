#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	const int tam=9;
	char nome[tam][50];
	int x=0,i=0;
	
	
	for(x=0;x<10;x++){
		do{
			printf("Informe a %d palavra: ",x+1);
			gets(nome[x]);
			i=strlen(nome[x]);
			if(i<7){
				printf("Informe uma palavra com 7 ou mais caracteres\n");
			}
		}while(i<7);	
	}
		
	
	printf("\n\n O quarto caractere da sexta palavra eh: %c \n",nome[5][3]);
system("pause");	
return 0;	
}
