//EX11
algoritmo "semnome"

var
V1:vetor[1..4,1..6] de inteiro
X,Y,MV:inteiro
inicio
MV <- 0
para x de 1 ate 4 faca
   para y de 1 ate 6 faca
      escreva ("Informe um valor: ")
      leia (V1[X,Y])
      se (V1[X,Y]) > MV entao
         MV <- (V1[X,Y])
      fimse
   fimpara
fimpara
Escreval
Escreva ("O maior valor é: ",MV)
fimalgoritmo
