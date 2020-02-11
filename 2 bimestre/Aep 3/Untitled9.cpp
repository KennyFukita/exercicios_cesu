#include <stdio.h>
#include <stdlib.h>

int main (){
	const int linha=6,coluna=6;
	int vet[linha][coluna],x=0,i=0,cont=0;
	
	for(x=0;x<linha;x++){
		for(i=0;i<coluna;i++){
			do{
				printf("Informe o %d valor da %d coluna: ",i+1,x+1);
				scanf("%d",&vet[x][i]);
				fflush(stdin);
				if(vet[x][i]<1 || vet[x][i]>500){
					printf("Informe um valor entre 1 e 500 \n");
				}
			}while(vet[x][i]<1 || vet[x][i]>500);
		}
		printf("\n");
	}
	
	printf("|Matriz| \n\n");
	
	for(x=0;x<linha;x++){
		for(i=0;i<coluna;i++){	
			printf(" %-10d",vet[x][i]);
		
		}
		printf("\n");
	}
	
	printf("\n");
system("pause");	
return 0;	
}
