#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	const int tam=9;
	int VETA[tam],VETB[tam],x=0,i=0;
	
	for(x=0;x<=tam;x++){
		do{
		printf("Informe o %d valor: ",x+1);
		scanf("%d",&VETA[x]);
			if(VETA[x]<6 || VETA[x]>130){
				printf("Informe um valor valido \n");
			}		
		}while(VETA[x]<6 || VETA[x]>130);
	}
	
	for(x=tam;x>=0;x--){
		VETB[i] = VETA[x];
		i++;
	}
	
	VETB[i]='\0';
	
	for(i=0;i<=tam;i++){
		printf("%d \n",VETB[i]);
	}
system("pause");	
return 0;	
}
