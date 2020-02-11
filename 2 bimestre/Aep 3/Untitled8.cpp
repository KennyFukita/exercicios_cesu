#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int x=0,tam=0,ma=0,me=99999,igual=0,i=0;
	char vet[10][20],maior[30],menor[30];
	
	for(x=0;x<10;x++){
		do{
			printf("Informe o %d nome:",x+1);
			scanf("%s",&vet[x]);
			fflush(stdin);
			igual=0;
			
				for(i=0;i<=x-1;i++){
				 	if(strcmp(vet[x],vet[i])==0){
				 		igual=1;
				 		printf("Informe um nome diferente dos anteriores\n");
					 }
				}
				
		}while(igual==1);
		
		tam=strlen(vet[x]);
		
		if(tam>ma){
			strcpy(maior,vet[x]);
			ma=tam;
		}
		
		if(tam<me){
			strcpy(menor,vet[x]);
			me=tam;
		}
	}	
	
	printf("\nMaior palavra: %s\n",maior);
	printf("Menor palavra: %s\n",menor);
	
system("pause");
return 0;
}
