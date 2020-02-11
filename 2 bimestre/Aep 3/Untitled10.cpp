#include <stdio.h>
#include <stdlib.h
#include <time.h>

int main(){
	const int linhas=6,colunas=6;
	int x=0,y=0;
	int existe=0,a=0,b=0,temp=0;
	int matriz[linhas][colunas];
	srand(time(NULL));
		
	for(x=0;x<linhas;x++){
		for(y=0;y<colunas;y++){		
			do{
				existe=0;
				printf("Informe o %d valor da %d linha: ",y+1,x+1);
				scanf("%d",&temp);
				printf("\n");
				
					for(a=0;a<linhas;a++){
						for(b=0;b<colunas;b++){
							if(temp==matriz[a][b]){
								existe=1;
							}
						}
					}
			
				
			}while(existe==1);
			matriz[x][y]=temp;
	    }
	}
		for(x=0;x<linhas;x++){
			printf("\n");
			for(y=0;y<colunas;y++){
				printf("%-5d",matriz[x][y]);				
			}
		}
	
printf("\n\n");	
system("pause");
return 0;
}
