//EX23
algoritmo "semnome"

var
x,y:inteiro
igual:caractere
v1:vetor[1..14] de inteiro
inicio
para x de 1 ate 14 faca
   repita
   igual <- "falso"
      Escreva ("Informe o",x," valor: ")
      leia(V1[x])
      para y de 1 ate x-1 faca
         se V1[X] = V1[Y] entao
            igual <- "verdadeiro"
            Escreval ("Já existe esse valor...")
         fimse
      fimpara
   ate igual = "falso"
fimpara
fimalgoritmo
