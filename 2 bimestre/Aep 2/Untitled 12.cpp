#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, x, j, m;
    
    do{
	    printf("Digite o primeiro valor: ");
	    scanf("%d", &m); 
	    printf("Digite o segundo valor: ");
	    scanf("%d", &n); 
	    if(m + 3 > n){
	    	printf("                          |ERRO| \n");
	    	printf("O segundo valor tem que ser no minimo tres unidades maior que o primeiro valor \n");
	    	system("pause");
	    	system("cls");
		}
	}while(m + 3 > n);

    printf("\n|Valores primos de %d a %d| \n",m,n);

    for (x = m; x <= n; x++){
        int achouprimo = 1;            
        for(j = 2; j <= x/2; j++){
            if (x % j == 0){        
                achouprimo = 0;
                break;              
            }
        }
        if (achouprimo){               
            printf("-> %d \n", x);
        }
    }

system ("pause");
return 0;
}
