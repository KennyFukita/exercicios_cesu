#include <stdio.h>
#include <stdlib.h>

int main(){
	int vet[10],x=0,y=0,tmp=0;
	
	for(x=0;x<10;x++){
		printf("Informe o %d valor: ",x+1);
		scanf("%d",&vet[x]);
	}
	
	for(x=1;x<10;x++){
		for(y=0;y<9;y++){
			if(vet[x]>vet[y]){
				tmp = vet[x];
				vet[x] = vet[y];
				vet[y] = tmp;
			}
		}
	}
	
	printf("\n");
	printf("Matriz ordenada por |Bubble Sort| \n");
	
	for(y=0;y<10;y++){
		printf("-> %d\n",vet[y]);	
	}
		
system("pause");	
return 0;	
}
