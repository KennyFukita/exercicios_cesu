#include <stdio.h>
#include <stdlib.h>

int main (){
	int x, mvalor=0, v[5], i, achou; 
	
	for(i=0;i<=4;i++){ 
		do{
		printf("Digite o %d valor: ",i+1);
		scanf("%d", &v[i]);
		achou = 0; 
		
		for(x=0;x<=i-1;x++){ 
			 
			if (v[i]==v[x]){ 
				achou = 1; 
				printf("Esse valor ja existe! \n");
			}
		}
		}while(achou==1); 
	
		if (mvalor<v[i]){
			mvalor = v[i];
		}
	}
	
	printf("Maior Valor digitado: %d \n", mvalor);

system("pause");
return 0;
}

