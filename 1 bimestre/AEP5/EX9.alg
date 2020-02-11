//EX9
algoritmo "semnome"

var
V1,V2:vetor[1..8] de caracter
y,x:inteiro
V3:vetor[1..8,1..2] de caracter
inicio
para x de 1 ate 8 faca
   escreva ("Informe um nome: ")
   leia (V1[X])
   V3[X,1] <- V1[X]
fimpara
para x de 1 ate 8 faca
   escreva ("informe um nome: ")
   leia (V2[X])
   V3[X,2] <- V2[X]
fimpara
para x de 1 ate 8 faca
   para y de 1 ate 2 faca
      escreva (V3[x,y],"   ")
   fimpara
   escreval
fimpara
fimalgoritmo
