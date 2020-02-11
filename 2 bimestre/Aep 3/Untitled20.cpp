#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
	int matriz [10][10];
	int i=0,j=0;
	
	srand(time(NULL));
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			matriz[i][j]=(rand() % 520)+35;
		}
	}
	
	printf ("|Matriz 10X10!|");
	
	for (i=0;i<10;i++){
		printf ("\n");
		for (j=0;j<10;j++){
			printf("%-5d",matriz[i][j]);
		}
	}
	
	printf ("\n\n");
	printf ("|Diagonal principal|");
	
	for (i=0;i<10;i++){
		printf ("\n");
		for (j=0;j<10;j++){
			if (i==j){
				printf("\n>>>|%d| |%d|: %d",i+1,j+1,matriz[i] [j]);
			}
		}
	}
	
	printf("\n\n");
	printf ("|Diagonal secundaria|");
	
	for (i=0;i<10;i++){
		printf ("\n");
		for (j=0;j<10;j++){
			if (9==i+j){
				printf("\n>>>|%d| |%d|: %d",i+1,j+1,matriz[i] [j]);
			}
		}
	}
	
	printf ("\n\n");
	
system ("pause");
return 0;
}

