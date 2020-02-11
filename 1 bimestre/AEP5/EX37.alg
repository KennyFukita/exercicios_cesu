//EX37
algoritmo "semnome"

var
X,CP:inteiro
MC:real
CF,Custo:vetor[1..10] de real
Desc:vetor[1..10] de caractere
COD:vetor[1..10] de inteiro
inicio
para x de 1 ate 10 faca
   Escreva ("Informe o código do produto: ")
   leia (Cod[x])
   Escreva ("Informe a descrição do produto: ")
   leia (Desc[x])
   Escreva ("Informe o custo do produto: ")
   leia (Custo[x])
   limpatela
   CF[X] <- CUSTO[X] + (CUSTO[X] * 26.5) / 100
   Se CF[X] > MC entao
      MC <- CF[X]
      CP <- Cod[x]
   fimse
fimpara
Escreva ("O produto de código",CP," é o mais caro custando: ",MC)
fimalgoritmo
