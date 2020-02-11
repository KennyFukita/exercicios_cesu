#include <stdio.h>
#include <stdlib.h>

int main (){
	float et1=0,et2=0,et3=0,etf=0,v=0;
	
		printf("Informe o valor do oleo: ");
		scanf("%f", &v);
			et1 = v/1000*120;
			v = 0;
		printf("Informe o valor da cenoura: ");
		scanf("%f", &v);
			et1 = et1 + (v/7*3);
			v = 0;
		printf("Informe o valor do ovo: ");
		scanf("%f", &v);
			et1 = et1 + (v/12*4);
			v = 0;
		printf("Informe o valor do acucar: ");
		scanf("%f", &v);
			et1 = et1 + (v/1000*320);
			v = 0;
		printf("Informe o valor da farinha: ");
		scanf("%f", &v);			
			et1 = et1 + (v/1000*300);
			v = 0;
		printf("Informe o valor do fermento: ");
		scanf("%f", &v);	
			et1 = et1 + (v/2);
			v = 0;
		printf("Informe o valor da manteiga: ");
		scanf("%f", &v);	
			et2 = (v/500*12);
			v = 0;
		printf("Informe o valor do acucar refinado: ");
		scanf("%f", &v);
			et2 = et2 + (v/1000*150);
			v = 0;
		printf("Informe o valor do chocolate: ");
		scanf("%f", &v);
			et2 = et2 + (v/200*18);
			v = 0;
			et3 = et1 + et2;
		printf("\n");
		
		printf ("----------------------------------------------------- \n");	
		printf("Custo da primeira etapa foi: %.2f reais \n",et1);
		printf("Custo da segunda etapa foi: %.2f reais \n",et2);
		printf("Custo total foi: %.2f reais \n",et3);
		printf ("----------------------------------------------------- \n");
		
system ("pause");
return 0;
				
}
