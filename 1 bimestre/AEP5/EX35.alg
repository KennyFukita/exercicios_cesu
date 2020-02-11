//EX35
algoritmo "semnome"

var
V1,V2,V3,V4:vetor[1..10] de inteiro
x:inteiro
inicio
para x de 1 ate 10 faca
   Escreva ("Informe um valor: ")
   Leia (V1[X])
   Escreva ("Informe um valor: ")
   Leia (V2[X])
   limpatela
   V3[X] <- V1[X] * V2[X]
   V4[X] <- V1[X] - V2[X]
fimpara
Escreval ("O produto dos dois vetores: ")
para x de 1 ate 10 faca
   Escreval (V3[X])
fimpara
Escreval
Escreval ("A subtração do primeiro vetor pelo segundo: ")
para x de 1 ate 10 faca
   Escreval (V4[X])
fimpara
fimalgoritmo
