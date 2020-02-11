#include <stdio.h>
#include <stdlib.h>

int main (){
	const int tam=6;
	int x=0,vet[tam];
	
	for(x=0;x<6;x++){
		printf("Informe o %d valor: ",x+1);
		scanf("%d",&vet[x]);
	}
		printf("\nVetor ao contrario: \n");
		
	for(x=tam-1;x>=0;x--){
		printf("->%d valor: %d \n",x,vet[x]);
	}
	
system("pause");	
return 0;	
}
