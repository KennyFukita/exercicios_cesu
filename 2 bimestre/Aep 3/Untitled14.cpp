#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	const int linhas=10,colunas=10;
	int x=0,y=0;
	int existe=0,a=0,b=0,temp=0;
	int matriz[linhas][colunas];
	srand(time(NULL));
	
	for(x=0;x<linhas;x++){
		for(y=0;y<colunas;y++){	
			do{
				do{
					existe=0;
					temp=(rand()%555);
					    for(a=0;a<linhas;a++){
							for(b=0;b<colunas;b++){
								if(temp==matriz[a][b]){
									existe=1;
								}
							}
						}
						
						if(temp<35){
							temp=(rand()%555);
						}
				
				}while(temp<35);
				
			}while(existe==1);
				matriz[x][y]=temp;
	    }
	}
	
	printf("|Matriz 10x10, com valores de 35 a 555 sem repetir valores| \n");
	
		for(x=0;x<linhas;x++){
			printf("\n");
			for(y=0;y<colunas;y++){
				printf("    %-5d",matriz[x][y]);				
			}
		}
	
printf("\n\n");	
system("pause");
return 0;
}
