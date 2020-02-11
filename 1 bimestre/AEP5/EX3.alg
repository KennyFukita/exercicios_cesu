//EX3
algoritmo "semnome"

var
num,num2:vetor[1..8] de inteiro
x:inteiro
inicio
para x de 1 ate 8 faca
   Escreva ("Informe um valor:")
   leia (num[x])
   num2[9-x] <- num[x]
fimpara
fimalgoritmo
