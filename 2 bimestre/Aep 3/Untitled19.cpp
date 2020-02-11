#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
	const int tam=5;
	char nome[tam][80],tmp[80];
	int i=0,x=0,achou=0,len=0;
	
	for(x=0;x<=tam;x++){
		do{
			do{
			
				printf("Informe o %d nome: ",x+1);
				gets(nome[x]);
				achou=0;
				
				for(i=0;i<=x-1;i++){ 
				 
					if(strcmp(nome[i],nome[x])==0){ 
						achou = 1; 
						printf("Esse nome ja informado! \n");
					}
				}
				
					len = strlen(nome[x]);
					
					if(len<5){
						printf("Informe um nome com no minimo 5 caracteres! \n");
					}
					
			}while(len<5);
		}while(achou==1);
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

	
	printf("\n");
	printf("Matriz Ordenada \n");
	
	for(x=0;x<=tam;x++){
		printf("->%s \n",nome[x]);
	}
	
system("pause");	
return 0;
}
