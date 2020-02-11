#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[10],x=0,y=0,tmp=0;
	
	for(x=0;x<10;x++){
		printf("Informe o %d valor: ",x+1);
		scanf("%d",&vet[x]);
	}
	
	for(x=0;x<9;x++){
		for(y=x+1;y<10;y++){
			if(vet[y]<vet[x]){
				tmp = vet[x];
				vet[x] = vet[y];
				vet[y] = tmp;
			}
		}
	}
	
	printf("\n");
	printf("Matriz ordenada por |Selection Sort| \n");
	
	for(x=0;x<10;x++){
		printf("-> %d %c\n",vet[x]);	
	}
		
system("pause");	
return 0;	
}
