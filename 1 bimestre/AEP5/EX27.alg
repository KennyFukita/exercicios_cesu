//EX27
algoritmo "semnome"

var
V1:vetor[1..10] de inteiro
X,I,aux:inteiro
inicio
para x de 1 ate 10 faca
   Escreva ("Informe um valor: ")
   leia (V1[X])
fimpara
para i de 1 ate 10 faca
   para x de 1 ate 10 faca
      se V1[X] > V1[I] entao
         aux <- V1[X]
         V1[X] <- V1[I]
         V1[I] <- aux
      fimse
   fimpara
fimpara
escreval
escreval
escreval
escreval
escreval ("Ordem crescente: ")
para x de 1 ate 10 faca
   escreval (V1[X])
fimpara
fimalgoritmo
