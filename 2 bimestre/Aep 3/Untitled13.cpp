#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main (){
	const int linha = 10, coluna = 10;
	int vet[linha][coluna], x=0, i=0, menor=0;
	
	
	srand(time(NULL));
	do{
		for(x=0;x<linha;x++){
			for (i=0;i<coluna;i++){
				vet[x][i]=(rand() %555) + 1;
					if(vet[x][i]<35){
						vet[x][i]=(rand() %555) + 1;
					}
				
			}
		}
   }while(vet[x][i]<35);
	
	printf("|MATRIZ 10X10 COM VALORES DE 35 ATE 555|\n\n");
	
	for(x=0;x<linha;x++){
		for (i=0;i<coluna;i++){
			printf ("%-8d",vet[x][i]);
		}
		printf("\n");
	}

printf("\n");
system ("pause");	
return 0;	
}
