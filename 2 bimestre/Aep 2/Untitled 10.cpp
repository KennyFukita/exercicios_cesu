#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int z=0,z1=0,x=0,x1=0;
	
	printf("|JOGO DE CARTAS| \n\n");
	printf("--> INSTRUCOES: \n");
	printf("1)Sera sorteado uma carta para o usuario e maquina\n");
	printf("2)A carta pode possuir valor de 1 ate 10\n");
	printf("3)A carta que possuir o maior valor vence\n");
	printf("3.1)Se caso as cartas possuirem o mesmo valor, o desempate ira ocorrer pelo naipe\n");
	printf("3.2)Os naipes sao de acordo com o jogo TRUCO\n");
	printf("3.3)Naipes: 4=Paus,3=Copas,2=Espadas e 1=Ouros\n");
	system ("pause");
	system ("cls");
	
	
	srand(time(NULL));
	x = (rand () % 10) + 1;
	x1 = (rand () % 4) + 1;
	z = (rand () % 10) + 1;
	z1 = (rand () % 4) + 1;
	
	printf("===========================================\n");
	printf("Carta sorteada para vc: %d\n",x);
	printf("De naipe: %d\n",x1);
	printf("===========================================\n");
	printf("Carta sorteada para maquina: %d\n",z);
	printf("De naipe: %d\n",z1);
	printf("===========================================\n\n");
	
	if(x>z){
		printf("VOCE VENCEU!! :D \n");
	}
	else if (z>x){
		printf("VOCE PERDEU!! D: \n");
	}
	else if(x=z){
		if(x1>z1){
			printf("PELO DESEMPATE DE NAIPES, VOCE VENCEU!! :D \n");
		}
		else if(z1>x1){
			printf("PELO DESEMPATE DE NAIPES, VOCE PERDEU!! D: \n");	
		}
		else if(x1==z1){
			printf("NINGUEM SAI TRISTE, VOCE EMPATOU!! c: \n");
		}	
	}
	
	
system ("pause");
return 0;	
}
