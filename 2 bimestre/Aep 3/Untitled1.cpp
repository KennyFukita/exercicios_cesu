#include <stdio.h>
#include <stdlib.h>

int main (){
	const int tam=12;
	int x=0,vet[tam];
	
	for(x=0;x<tam;x++){
		printf("Informe o %d valor: ",x+1);
		scanf("%d",&vet[x]);
	}
		printf("\n\nValores do vetor: \n");
	
	for(x=0;x<tam;x++){
		printf("-> %d valor: %d \n",x+1,vet[x]);	
	}
	
system ("pause");	
return 0;	
}
