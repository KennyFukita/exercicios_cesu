#include <stdio.h>
#include <stdlib.h>

int main (){
	float fin = 0, md = 0, nota = 0, freq = 0;
	int x,z;
	
		for (z = 1; z < 21; z = z + 1){
			printf ("|ALUNO %d|",z);
			printf ("\n");
			printf ("\n");
			for (x = 1; x < 5; x = x + 1){
		
				do {
					printf("Informe a %d nota: ",x);
					scanf("%f", &nota);
					md = md + nota;
						if (nota < 0)
						printf ("|ERRO| INFORME UM VALOR POSITIVO \n ");
							if (nota > 10)
							printf ("|ERRO| INFORME UM VALOR MENOR QUE DEZ \n");	
					
				} while (nota < 0 || nota > 10);
			}
			printf ("Informe a frequencia: ");
			scanf ("%f", &freq);
			printf ("\n");
				fin	= md/4;
	
					if (fin >= 6 && freq >= 75)
					printf ("VOCE FOI APROVADO(A) \n");	
					else
					printf ("VOCE FOI REPROVADO(A) \n");
					printf ("\n");
					system ("pause");
					system ("cls");
					
					nota = 0;
					md = 0;
		}
			
	return 0;
}
