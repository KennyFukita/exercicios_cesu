#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	const int linha = 10, coluna = 10;
	int x = 0, i = 0;
	char letras[linha][coluna][3];
	
	
	srand(time(NULL));
		for(x=0;x<linha;x++){
			for(i=0;i<coluna;i++){
				letras[x][i][1] = (rand() % 25) + 97;
				letras[x][i][2] = (rand() % 25) + 97;
				letras[x][i][3] = (rand() % 25) + 97;
			}
		}

	
	for(x=0;x<linha;x++){
		for(i=0;i<coluna;i++){
			printf("%c", letras[x][i][1]);
			printf("%c", letras[x][i][2]);
			printf("%c", letras[x][i][3]);
			printf("   ");
		}
			printf("\n");	
	}
		
	
	
system("pause");	
return 0;	
}
