#include <stdio.h>
#include <stdlib.h>

int main (){
	int soma=0, v1=0, v2=0, x=0, media2=0;
	float media=0;

		do{
			printf("Informe o primeiro valor: ");
			scanf("%d", &v1);
			if (v1 < 7){	
			printf ("Informe um valor maior que 7 \n");
			system ("pause");
			system ("cls");
			}
			if (v1 > 147){	
			printf ("Informe um valor menor que 147 \n");
			system ("pause");
			system ("cls");
			}
		} while (v1 < 7 || v1 > 147);
		
		do{
			printf("Informe o segundo valor: ");
			scanf("%d", &v2);
			if (v2 < 7){	
			printf ("Informe um valor maior que 7 \n");
			}
			if (v2 > 147){	
			printf ("Informe um valor menor que 147 \n");
			}
		} while (v2 < 7 || v2 > 147);
		
		if (v1 < v2){
			for(x = v1; x <= v2 ;x++){
				if (x % 2 == 0){
				soma = soma + x;
				}
				else{
				media = media + x;
				media2++;	
				}
			}
		system("cls");
		}
		else{
			for(x = v2; x <= v1 ;x++){
				if (x % 2 == 0){
				soma = soma + x;
				}
				else{
				media = media + x;
				media2++;	
				}
			}
		system("cls");
		}
	
	printf("A soma dos valores pares eh: %d \n",soma);
	printf("A media dos valores impares eh %.2f \n",media/media2);
			
system ("pause");	
return 0;	
}
