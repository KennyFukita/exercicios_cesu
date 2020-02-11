//EX38
algoritmo "semnome"

var
V1:vetor[1..10] de caractere
V2:vetor[1..10] de inteiro
x,y:inteiro
inicio
para x de 1 ate 10 faca
   Escreva ("Frase",x,": ")
   Leia(V1[X])
   V2[X] <- compr(V1[X])
fimpara
limpatela
para x de 1 ate 10 faca
   Escreval ("A quantidade de caracteres da frase",x," é:",V2[X])
fimpara
fimalgoritmo
